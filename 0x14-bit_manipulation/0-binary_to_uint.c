#include "main.h"
#include <stdio.h>
#include <string.h>

/**
  * binary_to_uint - converts binary to decimal
  * @b: STRING
  * Return: returns 0 or sum
  */
unsigned int binary_to_uint(const char *b)
{
	int len = strlen(b) - 1;
	int sum = 0;
	int pow = 1;

	if (b == NULL)
		return (0);

	for (; len >= 0; len--)
	{
		if (b[len] != '1' && b[len] != '0')
			return (0);

		if (b[len] == '1')
			sum += pow;

		pow *= 2;
	}

	return (sum);
}
