#include "main.h"
#include <ctype.h>

/**
* print_sign- checks if parameter is positive or negative
* @n: Parameter 1
*
* Description: When parameter is positive prints +
* when negative -
* when zero 0
* Return: returns 1, 0 and -1
*/

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
