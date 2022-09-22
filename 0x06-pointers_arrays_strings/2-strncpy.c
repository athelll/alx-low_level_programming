#include "main.h"

/**
* _strncpy - copys string in second patrameter
* into second parameter
* @dest: First parameter
* @src: Second Parameter
* @n: Third Parameter
* Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{

int a = 0;

while (a < n)
{
dest[a] = src[a];
if (src[a] == '\0')
break;
a++;
}

if (a < n)
dest[a] = '\0';

return (dest);
}
