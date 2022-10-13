#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * int_index - searches for an integer using a functions logic
  * @array: array in which number to be searched is stored
  * @size: size of array
  * @cmp: compare function.
  * Return: returns an int.
  */


int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int (*num)(int);

	if (size <= 0 || cmp == NULL || array == NULL)
		return (-1);
	num = cmp;

	for (i = 0; i < size; i++)
	{
		if (num(array[i]))
			return (i);
	}

	return (-1);
}
