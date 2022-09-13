#include "main.h"
#include <ctype.h>

/**
* _isalpha- checks if parameter is a charachter
* @c: Parameter 1
*
* Description: When parameter is a character returns 1 when not returns 0
* Return: returns 1 or 0
*/

int _isalpha(int c)
{
int check = isalpha(c);

if (check > 0)
return (1);
else
return (0);
}
