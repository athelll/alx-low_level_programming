#include "main.h"
#define NULL 0

/**
  * _strchr- locate 1st occurrence of char in string and returns pointer there
  * @s: Parameter 1;
  * @c: Parameter 2;
  * Return: returns a pointer to the character where c first occured
*/

char *_strchr(char *s, char c)
{
int a = 0;

while (s[a] != '\0' && s[a] != c)
	a++;

if (s[a] == c)
	return (&s[a]);
else
	return (NULL);
}
