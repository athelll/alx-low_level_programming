#include "main.h"

/**
* print_numbers- prints numbers from 1-9
* Returns: void
*/

void print_numbers(void)
{
int num = 0;

while (num < 10)
{
_putchar('0' + num);
num++;
}
_putchar('\n');
}
