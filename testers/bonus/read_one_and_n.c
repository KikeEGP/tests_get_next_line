#include "get_next_line_bonus.h"
#include <stdio.h>

void	read_one_and_jump(char *lines)
{
	int	fd;

	fd = open("files_for_read/too_little_and_jump.txt", O_RDONLY);
	while (lines != NULL)
	{
		lines = get_next_line(fd);
		if (lines)
			printf("%s", lines);
		free(lines);
	}
	close(fd);
}

int	main(void)
{
	char	*lines;

	lines = "";
	read_one_and_jump(lines);
}
