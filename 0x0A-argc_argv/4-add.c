#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
* main- adds all number inputed in terminal
* @argc: Argument Count
* @argv: Argument Vector
* -----------------------
* Return: 0 for Success and 1 if a characher or
* Alphabet was inputed as an argumnet in the terminal
*/

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}

	printf("%d\n", sum);
	return (0);
}
