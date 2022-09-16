#include "main.h"

/**
* main- Entry point
* Return: returns 0.
*/

int main(void)
{
int a;

for (a = 1; a < 101; a++)
{
if (a % 3 == 0)
printf("Fizz ");
else if (a % 5 == 0)
printf("Buzz ");
else if ((a % 3 && a % 5) == 0)
printf("FizzBuzz ");
else
printf("%d ", a);
}

printf("\n");
return (0);
}
