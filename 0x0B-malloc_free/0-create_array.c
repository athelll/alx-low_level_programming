#include "main.h"
#include <stdlib.h>

/**
* create_array - creates an array
* @size: Size parameter
* @c: Character parameter
* Return: returns an array or NULL if failed.
*/

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size <= 0)
		return (NULL);

	a = malloc(sizeof(char) * size);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}

	a[i] = '\0';
	return (a);
}
