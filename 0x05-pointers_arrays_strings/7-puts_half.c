#include "main.h"
#include "string.h"
/**
* puts_half- prints some of the characters
* @str: String to be altered and printed
* Returm: Void.
*/

void puts_half(char *str)
{
int len = strlen(str);
int a = len / 2;
int b = (len - 1) / 2;
int i = 0;

while (i < len)
{
if (len % 2 == 0)
{
if (len != a)
{
_putchar(str[a]);
a++;
}
else
break;
}
else
{
if (len != a)
{
_putchar(str[b]);
b++;
}
else
break;
}
}
_putchar('\n');
}
