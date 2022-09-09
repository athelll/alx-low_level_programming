#include <stdio.h>

/**
 * main - entry point
 * Return: Always 0.
 */

int main(void)
{
int a;

for (a = 0; a < 10; a++)
{
putchar((a % 10) + '0');
}
putchar('\n');

return (0);
}
