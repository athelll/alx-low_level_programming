#include "main.h"

/**
  * _strspn- return length of string that matches values consistently
  * @s: Parameter 1
  * @accept: Parameter 2
  * Return: returns length
  */

unsigned int _strspn(char *s, char *accept)
{
int length = 0;
int a = 0;
int b;

while (s[a] != '\0')
{
	for (b = 0; accept[b] != '\0' ; b++)
	{
	if (accept[b] == s[a])
	{
		length++;
		break;
	}
	if (accept[b + 1] == '\0' && s[a] != accept[b])
		return (length);
	}
a++;
}
return (length);
}
