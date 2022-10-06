#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* len - strlen() in C
* @word: String Parameter
* Return: retuens length of word
*/

int len(char *word)
{
	int i = 0;
	int lenght = 0;

	for (; word[i] != '\0'; i++)
	{
		lenght++;
	}
	return (lenght);
}

/**
* string_nconcat - concatanets 2 strings
* @s1: String Parameter
* @s2: String Parameter 2
* @n: number of bytes for @s2
* Return: returns a pointer to the
* Concatenated string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int num = n;
	int a, b;
	int lens1 = len(s1);
	int alloc = lens1 + n + 1;
	char *str;

	if (s1 == NULL) /* account for NULL strings */
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (num < 0) /* account for negative n bytes */
		return (NULL);
	if (num >= len(s2)) /* account for n too big */
		n = len(s2);

	str = malloc(sizeof(char) * alloc);
	if (str == NULL)
		return (NULL);

	for (a = 0; a < lens1; a++)
		str[a] = s1[a];

	for (b = 0; b < num; b++)
	{
		str[a] = s2[b];
		a++;
	}

	str[a] = '\0';

	return (str);
}
