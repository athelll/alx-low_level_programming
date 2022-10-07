#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _calloc - uses malloc to allocate space in memory
* @nmemb: number of element in array
* @size: size in bytes
* Return: retuns a void pointer to where
* the spaces where allocated
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
