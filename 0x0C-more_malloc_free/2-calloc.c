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
	int a;
	int alloc = size * nmemb;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	ptr = malloc(alloc);

	if (ptr == NULL)
		return (NULL);

	for(a = 0; a < (alloc); a++)
		*((char*)ptr + a) = 0;

	return (ptr);
}
