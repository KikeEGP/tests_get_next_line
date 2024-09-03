#include "get_next_line_bonus.h"
#include <stdio.h>

int	main(void)
{
	int	fd_es;
	int	fd_mx;
	int	i;
	char	*line_esp;
	char	*line_mx;

	line_esp = "";
	line_mx = "";
	fd_es = open("files_for_read/jengi_esp.txt", O_RDONLY);
	fd_mx = open("files_for_read/jengi_mx.txt", O_RDONLY);
	i = 1;
	while (i <= 8)
	//while (line_esp != NULL && line_mx != NULL)
	{
		line_esp = get_next_line(fd_es);
		printf("%s", line_esp);
		line_mx = get_next_line(fd_mx);
		//if (lines)
		printf("%s", line_mx);
		i++;
		free(line_esp);
		free(line_mx);
	}
	close(fd_es);
	close(fd_mx);
}


