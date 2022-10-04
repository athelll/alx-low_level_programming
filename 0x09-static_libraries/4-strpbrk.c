#include "main.h"

/**
  * _strpbrk- searches a string for any of a set of bytes.
  * @s: Parameter 1
  * @accept: Parameter 2
  * Return: returns the searched string
*/

char *_strpbrk(char *s, char *accept)
{
	int a;
	int b;

	for (a = 0; s[a] != '\0' ; a++)
	{
		for (b = 0; accept[b] != '\0' ; b++)
		{
			if (s[a] == accept[b])
			{
				s = &s[a];
				return (s);
			}
		}
	}
	return (NULL);
}
