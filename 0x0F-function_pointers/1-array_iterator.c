#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
  * array_iterator - iterates an array an applys an function on it
  * @array: array in which the function will be applied
  * @size: supposed size of the array;
  * @action: specified function to be performed
  * Return: returns void.
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i, b = size;
	void (*func)(int);

	func = action;

	if (array != NULL && action != NULL)
	for (i = 0; i < b; i++)
	{
		func(array[i]);
	}
}
