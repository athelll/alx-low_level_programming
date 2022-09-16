#include "main.h"

/**
* print_diagonal- prints diagonal line depending on the parameter
* @n: Parameter
* Return void
*/

void print_diagonal(int n)
{
int column;
int row;

if (n <= 0)
_putchar('\n');
else
{
for (column = 0; column < n; column++)
{
for (row = 0; row < n; row++)
{
if (row != column)
_putchar(' ');
else
break;
}
_putchar('\\');
_putchar('\n');
}
}
}
