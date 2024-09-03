#include "../get_next_line.h"
#include <stdio.h>

void	single_read(char *lines)
{
	int	fd;

	fd = open("../files_for_read/one_byte.txt", O_RDONLY);
	while (lines != NULL)
	{
		lines = get_next_line(fd);
		printf("%s", lines);
		free(lines);
	}
	close(fd);
}

int	main(void)
{
	char	*lines;

	lines = "";
	single_read(lines);

}
