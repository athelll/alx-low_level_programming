#include <stdio.h>

/**
*main - Entry point
*Return: Always 0 (Success)
*/

int main(void)
{
char letters[] = "abcdfghijklmnoprstuvwxyz";
int i;

for (i = 0; i < 24; i++)
{
putchar(letters[i]);
}
putchar('\n');

return (0);
}
