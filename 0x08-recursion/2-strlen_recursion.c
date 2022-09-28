#include "main.h"

/**
* _strlen_recursion- returns length of string
* @s: Parameter 1
* Return: returns length
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}
