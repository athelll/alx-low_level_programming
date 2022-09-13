#include "main.h"

/**
* print_last_digit- function that prints last digit of parameter
* @num: Parameter
* Return: returns last digit of parameter
*/

int print_last_digit(int num)
{
int num_last;

if (num < 0)
{
num *= -1;
}
num_last = num % 10;
_putchar('0' + num_last);

return (num_last);
}
