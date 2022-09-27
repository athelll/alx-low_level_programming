#include "main.h"

/**
* _strstr- functions that locates a substring (needle) in haystack
* @haystack: Parameter 1
* @needle: Parameter 2
* Return: NULL or a pointer to the first occurence of needle in haystack
*/

char *_strstr(char *haystack, char *needle)
{
	int a;

	for (a = 0; haystack[a] != '\0'; a++)
	{
		if (haystack[a] == needle[0])
		{
			haystack = &haystack[a];
			return (haystack);
		}
	}
	return (NULL);

}
