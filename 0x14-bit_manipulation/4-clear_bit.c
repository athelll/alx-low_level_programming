#include "main.h"

/**
  * clear_bit - clears a bit a specific index
  * @n : integr to be altered
  * @index: index
  * Return: 1 if successful, -1 if failed
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max;
	int mask = 1;

	max = (sizeof(unsigned int) * 8);

	if (index > max)
		return (-1);

	mask = ~(mask << index);

	*n = *n & mask;

	return (1);
}
