#include "main.h"
/**
 * read_textfile - reads text files then prints it to the POSIX standard output
 * @filename: file to open
 * @letters: bytes to read
 * Return: num of bytes to read and write to the output
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	int lenRead, lenWrite;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(letters * sizeof(char));

	if (buf == NULL)
		return (0);

	lenRead = read(fd, buf, letters);

	lenWrite = write(STDOUT_FILENO, buf, lenRead);
	if (lenWrite != lenRead && lenWrite == -1)
		return (0);
	free(buf);
	close(fd);
	return (lenRead);
}
