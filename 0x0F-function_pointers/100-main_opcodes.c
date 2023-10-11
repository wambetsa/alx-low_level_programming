#include <stdio.h>
#include <stdlib.h>

void print_opcodes(unsigned char* start, int num_bytes) {
	int i;

	for (i = 0; i < num_bytes; i++) {
		printf("%02x", start[i]);
		if (i < num_bytes - 1) {
			printf(" ");
		}
	}
	printf("\n");
}

int main(int argc, char *argv[]) {
	if (argc != 2) {
		fprintf(stderr, "Error\n");
		return 1;
	}

	int num_bytes = atoi(argv[1]);
	if (num_bytes < 0) {
		fprintf(stderr, "Error\n");
		return 2;
	}

	// Calculate the address of the main function
	unsigned char* main_address = (unsigned char*)&main;

	// Print opcodes of the main function
	print_opcodes(main_address, num_bytes);

	return 0;
}
