#include "main.h"

/**
* _puts- prints a string
* @str: Character Parameter
* Return: Void
*/

void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
