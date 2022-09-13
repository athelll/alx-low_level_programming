#include "main.h"

/**
* print_alphabet_x10 - print letters a - z in lowercase 10 times
* Return: returns void
*/

void print_alphabet_x10(void)
{
char letter;
int loop;

for (loop = 0; loop < 10; loop++)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}

return;
}
