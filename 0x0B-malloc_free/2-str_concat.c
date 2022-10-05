#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* str_concat - Concatenates 2 strings together
* @s1: First String
* @s2: Second String
* Return: retuns a string on success.
*/

char *str_concat(char *s1, char *s2)
{
	char *a;
	int lens1 = strlen(s1);
	int lens2 = strlen(s2);
	int total_len = lens1 + lens2 + 1;
	int i = 0;
	int x = 0;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	a = malloc(sizeof(char) * total_len);

	if (a == NULL)
		return (NULL);

	while (s1[i] != '\0')
	{
		a[i] = s1[i];
		i++;
	}

	while (s2[x] != '\0')
	{
		a[i] = s2[x];
		x++;
		i++;
	}

	a[i] = '\0';
	return (a);
}
