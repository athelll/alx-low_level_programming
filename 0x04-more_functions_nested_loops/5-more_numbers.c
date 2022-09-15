#include "main.h"

/**
* more_numbers- prints 1 - 14 , 10 times
* Return: void
*/

void more_numbers(void)
{
int num = 0;
int line = 0;

while (line < 10)
{
while (num < 15)
{
if (num / 10 > 0)
_putchar((num / 10) + '0');
_putchar((num % 10) + '0');
num++;
}
_putchar('\n');
num = 0;
line++;
}
}
