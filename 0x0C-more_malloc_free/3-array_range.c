#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* array_range - creates an array witha range of values
* @min: minimum value
* @max: maximum value
* Return: returns a pointer to that array
*/

int *array_range(int min, int max)
{
	int a;
	int *arr;
	int size = (max - min) + 1;
	int amin = min;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
	{
		arr[a] = amin;
		amin++;
	}

	return (arr);
}
