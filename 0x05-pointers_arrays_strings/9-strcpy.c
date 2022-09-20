#include "main.h"
#include <string.h>

/**
* _strcpy- copys the string of a parameter to another
* @dest: First parameter
* @src: Second parameter
* Return: returns dest
*/

char *_strcpy(char *dest, char *src)
{
int len = strlen(src);
int i = 0;

while (i <= len)
{
dest[i] = src[i];
i++;
}

return (dest);
}
