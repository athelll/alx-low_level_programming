#include "main.h"

/**
* _strcat- Concatenate 2 strings
* @dest: Parameter
* @src: Second Parameter
* Return: returns dest.
*/

char *_strcat(char *dest, char *src)
{
int a = 0;
int b = 0;

while (dest[a] != '\0')
dest++;

while (src[b] != '\0')
{
dest[a] = src[b];
dest++;
src++;
}
dest[a] = '\0';

return (dest);
}
