#include "main.h"

/**
* print_line- prints a line depending on the parameters
* @n: Parameter
* Return: void
*/

void print_line(int n)
{
int num;

for (num = 0; num < n; num++)
{
if (n <= 0)
_putchar(' ');
else
_putchar('_');
}
_putchar('\n');
}
