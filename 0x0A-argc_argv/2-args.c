#include "main.h"
#include <stdio.h>

/**
* main- lists all the arguments inputed in terminal
* @argc: Argument Count
* @argv: Argument Vector
* Return: returns 0.
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
