#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
* _strdup - duplicates a string
* @str: String to be duplictaed
* Return: returns a string duplicate of @str
*/

char *_strdup(char *str)
{
	char *c;
	int i = 0;

	c = malloc(sizeof(char) * strlen(str));

	while (str[i] != '\0')
	{
		c[i] = str[i];
		i++;
	}
	c[i] = str[i];

	return (c);
}
