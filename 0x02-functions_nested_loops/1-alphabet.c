#include "main.h"

/**
* print_alphabet - print letters a - z in lowercase
* Return: returns void
*/

void print_alphabet(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
return;
}
