#include <stdio.h>
#include "main.h"

/**
* main - prints the name of the output file that runs the code
* @argc : Argument Count
* @argv : Argument Vector
* Return : returns void.
*/

void main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
}
