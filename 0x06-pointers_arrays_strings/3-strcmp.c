#include "main.h"

/**
* _strcmp- Compares 2 strings
* @s1: First Parameter
* @s2: Second Parameter
* Return: returns -15,15 and 0. depending...
*/

int _strcmp(char *s1, char *s2)
{
if (s1 < s2)
return (-15);
else if (s1 > s2)
return (15);
else
return (0);
}
