#include "get_next_line_bonus.h"
#include <stdio.h>

int	main(void)
{	char	*lines;
	
	lines = "";
	while (lines != NULL)
	{
		lines = get_next_line(1);
		//if (lines)
		printf("%s", lines);
		free(lines);
		//lines = NULL;
	}
}
