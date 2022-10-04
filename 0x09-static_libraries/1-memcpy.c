#include "main.h"

/**
  * _memcpy- Copies n number of characters from src into array in dest
  * @dest: Parameter 1
  * @src: Parameter 2
  * @n: Parameter 3
  * Return: returns dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
int num = n;

if (num > 0)
{
	int i = 0;

	for (; i < num; i++)
	{
		dest[i] = src[i];
	}
}

return (dest);
}
