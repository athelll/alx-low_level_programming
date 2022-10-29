#include "main.h"

/**
* get_bit - get bit at index
* @n: number
* @index: index within binary number
* Return: bit 0 or 1, or -1 if error
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	unsigned int  max_int;

	max_int = (sizeof(unsigned int) * 8);

	if (index > max_int)
		return (-1);

	bit = ((n >> index) & 1);

	return (bit);
}
