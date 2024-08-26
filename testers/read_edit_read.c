#include "../get_next_line.h"
#include <stdio.h>

void	read_edit(int fd, char *lines)
{
	while (lines != NULL)
	{
		lines = get_next_line(fd);
		if (lines)
			printf("%s\n", lines);
		free(lines);
	}
}

void	read_edit_read(char *lines)
{
	int	fd;

	fd = open("../files_for_read/editable.txt", O_RDWR);
	lines = get_next_line(fd);
	if (lines)
		printf("%s", lines);
	free(lines);
	write(fd, "THIS HAS BEEN WRITE LATER\n", 26);
	read_edit(fd, lines);
	close(fd);
}
/*
void	regular_read(char *lines)
{
	int	fd;
	while (lines != NULL)
	{
		fd = open("../files_for_read/editable.txt", O_RDONLY);
		lines = get_next_line(fd);
		if (lines)
			printf("%s", lines);
		free(lines);
	}
	close(fd);
}*/

int	main(void)
{
	char	*lines;

	lines = "";
	//regular_read(lines);
	read_edit_read(lines);
}
