#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main- Mutiplies 2 arguments and prints result
* @argc: Argument Count
* @argv: Argument Vector
* Return: returns 0 for success and 1 for failure.
*/

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int mutiple = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", mutiple);
	}
	else
	{
		printf("Error\n");

		return (1);
	}
	return (0);
}
