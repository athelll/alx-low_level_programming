#include "main.h"

/**
* _strlen- gives the length of a string
* @s: Parameter (which is the string)
* Return: returns length of string.
*/

int _strlen(char *s)
{
int a = 0;

while (*s != '\0')
{
a++;
s++;
}

return (a);
}
