#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

#define BUFFER_SIZE 1024

void print_usage_error() {
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

void print_read_error(const char *file_from) {
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
	exit(98);
}

void print_write_error(const char *file_to) {
	dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
	exit(99);
}

void print_close_error(int fd) {
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}

int main(int argc, char *argv[]) {
	if (argc != 3)
	{
		print_usage_error();
	}

	const char *file_from = argv[1];
	const char *file_to = argv[2];

	int fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1) {
	print_read_error(file_from);
	}

	int fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (fd_to == -1)
	{
		print_write_error(file_to);
	}

	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			print_write_error(file_to);
		}
		if (bytes_written != bytes_read)
		{
			print_write_error(file_to);
		}
	}

	if (bytes_read == -1)
	{
		print_read_error(file_from);
	}

	if (close(fd_from) == -1)
	{
		print_close_error(fd_from);
	}

	if (close(fd_to) == -1)
	{
		print_close_error(fd_to);
	}

	return 0;
}
