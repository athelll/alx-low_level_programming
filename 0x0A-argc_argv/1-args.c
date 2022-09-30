#include <stdio.h>
#include "main.h"

/**
* main- prints number of arguments passed in the terminal
* @argc: Argument Count
* @argv: Argument Vector
* Return: returns 0.
*/

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
