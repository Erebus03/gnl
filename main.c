#include "get_next_line.h"

int main() {
	int fd = open("../../Downloads/big.txt", O_RDONLY);
	char *line = get_next_line(fd);
	//int i = 0;
	while (line) {
		printf("%s", line);
		free(line);
		line = get_next_line(fd);
	}

	free (line);
	close (fd);
	return 0;
}