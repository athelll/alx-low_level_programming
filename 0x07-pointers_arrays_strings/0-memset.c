#include <stdio.h>

/**
* _memset- replaces the n number of bytes with character b
* @s: Parameter 1
* @b: Parameter 2
* @n: Parameter 3
* Return: Returns s
*/

char *_memset(char *s, char b, unsigned int n)
{
int num = n;

if (num > 0)
{
int i = 0;

for (; i < num; i++)
{
s[i] = b;
}
}
return (s);
}
