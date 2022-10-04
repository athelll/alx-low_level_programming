#include "main.h"
#include <ctype.h>

/**
* _isdigit- checks if parameter is a digit
* @c: Parameter 1
* Return: returns 1 or 0
*/

int _isdigit(int c)
{
if (isdigit(c))
return (1);
else
return (0);
}
