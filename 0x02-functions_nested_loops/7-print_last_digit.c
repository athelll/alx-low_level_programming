#include "main.h"

/**
* print_last_digit- function that prints last digit of parameter
* @num: Parameter
* Return: returns last digit of parameter
*/

int print_last_digit(int num)
{
if (num < 0)
{
num *= -1;
}
_putchar('0' + (num % 10));

return (num % 10);
}
