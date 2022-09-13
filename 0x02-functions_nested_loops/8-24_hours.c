#include "main.h"

/**
* jack_bauer- prints the hours and min
* Description: what i wrote up
* Return: Void.
*/

void jack_bauer(void)
{
int hrs = 0;
int sec = 0;

while (hrs < 24)
{
while (sec < 60)
{
_putchar('0' + (hrs / 10));
_putchar('0' + (hrs % 10));
_putchar(':');
_putchar('0' + (sec / 10));
_putchar('0' + (sec % 10));
_putchar('\n');
sec++;
}
sec = 0;
hrs++;
}
return;
}
