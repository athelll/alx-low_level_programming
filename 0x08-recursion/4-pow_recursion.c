#include "main.h"

/**
* _pow_recursion- returns value of x to the power of y
* @x: Number to be powered
* @y: Power
* Return: returns the power of x to y
*/

int _pow_recursion(int x, int y)
{
	if (y == 1)
		return (x);
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
