#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  * print_strings - prints strings
  * @separator : string seperator
  * @n: number of arguments
  * @... : Variadic arguments.
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int a;
	char *s;

	if (separator == NULL)
		return;

	va_start(ap, n);

	for (a = 0; a < n ; a++)
	{
		s = va_arg(ap, char*);
		if (s == NULL)
		{
			printf("(nil)");
			continue;
		}
		if (a == n - 1)
		{
			printf("%s", s);
			break;
		}
		printf("%s%s", s, separator);
	}

	va_end(ap);
	printf("\n");
}
