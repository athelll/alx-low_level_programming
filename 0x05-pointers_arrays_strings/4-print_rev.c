#include "main.h"

/**
* print_rev- prints string in reverse
* @s: Paramerter
* Return: Void.
*/

void print_rev(char *s)
{
int i;
int len = 0;

while (*s != '\0')
{
len++;
++s;
}

s--;

for (i = len; i > 0; i--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
