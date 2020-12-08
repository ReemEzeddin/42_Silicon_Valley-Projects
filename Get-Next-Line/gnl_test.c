#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>

int main()
{
	int		flag;
	char	**line;
	int		fd;
	int		gnl;

	flag = 1;
	line = malloc(sizeof(char *));
	//fd = 42;
	fd = open("/mnt/c/42/aymen/42-Project-Get_Next_Line/test.txt", O_RDONLY);	
	while (flag)
	{	
		gnl = get_next_line(fd, line);
		printf("Return: %d\n", gnl);
		printf("Line: %s\n", *line);
		printf("Flag: %d\n", flag);
		flag++;
		ft_del(*line);
		if (gnl == 0 || gnl == -1)
			flag = 0;
	}
	return (0);
}
