#include "main.h"
#include <ctype.h>

/**
* _isupper- checks if a character is in uppercase or not
* @c: Paraameter 1
* Return: returns 1 or 0
*/

int _isupper(int c)
{
int result = isupper(c);

if (result > 0)
return (1);
else
return (0);
}
