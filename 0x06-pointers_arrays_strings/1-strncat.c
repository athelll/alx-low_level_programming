#include "main.h"

/**
* _strncat- Concatenate 2 strings
* @dest: Parameter
* @src: Second Parameter
* @n: Third Parameter
* Return: returns dest.
*/

char *_strncat(char *dest, char *src, int n)
{
int a = 0;
int b = 0;

while (dest[a] != '\0')
a++;

while (src[b] != src[n])
{
dest[a] = src[b];
if (src[b] == '\0')
break;
a++;
b++;
}
dest[a] = '\0';

return (dest);
}
