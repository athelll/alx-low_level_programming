#include "main.h"

/**
* print_array- prints the elements of an array
* @a: Array Parameter
* @n: Index Parameter
* Return: Void.
*/

void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%d", *(a + i));
if (i != (n - 1))
printf(", ");
}
printf("\n");
}
