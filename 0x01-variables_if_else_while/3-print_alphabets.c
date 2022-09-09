#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (Success)
 */

int main(void)
{
char letters[] = "abcdefghijklmnopqrstuvwxyz";
char letters_upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i;

for (i = 0; i < 26; i++)
{
putchar(letters[i]);
}
for (i = 0; i < 26; i++)
{
putchar(letters_upper[i]);
}
putchar('\n');

return (0);
}
