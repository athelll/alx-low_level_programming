#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* malloc_checked - alloctes memory using malloc
* @b: Number of bytes to be allocated
* Return: returns a void pointer
*/

void *malloc_checked(unsigned int b)
{
	void *a = malloc(b);

	if (a == NULL)
		exit(98);
	return (a);
}
