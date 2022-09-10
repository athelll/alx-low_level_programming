#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0.
 */

int main(void)
{
char alpha = 'z';

for (; alpha >= 'a'; alpha--)
{
putchar (alpha);
}
putchar ('\n');

return (0);
}
