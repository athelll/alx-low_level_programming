#include "main.h"
#include <ctype.h>

/**
* _islower- checks if a character is in lower case
* @c: Parameter 1
*
* Description: When lowercase returns 1 when not returns 0
* Return: returns 1 or 0
*/

int _islower(int c)
{
int check = islower(c);

if (check > 0)
return (1);
else
return (0);
}
