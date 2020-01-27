
#include <unistd.h> //write
#include <stdio.h> //printf
#include <stdlib.h> //malloc

int			main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc > 1)
	{
		while (argv[1][i] != '\0')
		{
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
