#include "get_next_line_bonus.h"

int main() {

	
	int fd1 = open("../../Downloads/big.txt", O_RDONLY);
	int fd2 = open("../../Downloads/big.txt", O_RDONLY);
	int fd3 = open("../../Downloads/big.txt", O_RDONLY);
	int fd4 = open("../../Downloads/big.txt", O_RDONLY);
	
	
	char *line = get_next_line(fd1);

	while (line) {
		printf("%s", line);
		free(line);

		line = get_next_line(fd2);
		printf("%s", line);
		free(line);

		line = get_next_line(fd3);
		printf("%s", line);
		free(line);

		line = get_next_line(fd4);
		printf("%s", line);
		free(line);

		line = get_next_line(fd1);
	}

	free (line);
	close (fd1);
	close (fd2);
	close (fd3);
	close (fd4);
	return 0;
}