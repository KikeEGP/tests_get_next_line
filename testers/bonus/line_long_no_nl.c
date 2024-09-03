#include "get_next_line_bonus.h"
#include <stdio.h>

void	single_read(char *lines)
{
	int	fd;
	int	i;

	fd = open("files_for_read/big_line_no_nl.txt", O_RDONLY);
//	while (lines != NULL)
	i = 1;
	while (i <= 1)
	{
		lines = get_next_line(fd);
		//if (lines)
			printf("%s", lines);
		i++;
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
