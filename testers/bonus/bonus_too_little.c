#include "get_next_line_bonus.h"
#include <stdio.h>

int	main(void)
{
	int	fd_1;
	int	fd_2;
	int	i;
	char	*line_1;
	char	*line_2;

	line_1 = "";
	line_2 = "";
	fd_1 = open("files_for_read/one_byte.txt", O_RDONLY);
	fd_2 = open("files_for_read/too_little.txt", O_RDONLY);

	i = 1;
	while (i != 6)
//	while (line_1 != NULL && line_2 != NULL)
	{
		line_2 = get_next_line(fd_2);
		printf("line_2: %s", line_2);
		free(line_2);
		line_1 = get_next_line(fd_1);
		//if (lines)
		printf("line_1: %s", line_1);
		free(line_1);
		i++;
	}
	close(fd_1);
	close(fd_2);
}


