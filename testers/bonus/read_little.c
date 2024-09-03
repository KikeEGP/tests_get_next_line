#include "get_next_line_bonus.h"
#include <stdio.h>

void	read_little(char *lines)
{
	int	fd;

	fd = open("files_for_read/too_little.txt", O_RDONLY);
	while (lines != NULL)
	{
		lines = get_next_line(fd);
		if (lines)
			printf ("%s", lines);
		free(lines);
	}
	close(fd);
}

int	main(void)
{
	char	*lines;

	lines = "";
	read_little(lines);
}
