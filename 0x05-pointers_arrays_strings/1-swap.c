#include "main.h"

/**
* swap_int - swaps values of parameters
* @a: Parameter 1
* @b: Parameter 2
* Return: Void
*/

void swap_int(int *a, int *b)
{
int c;

c = *b;
*b = *a;
*a = c;
}
