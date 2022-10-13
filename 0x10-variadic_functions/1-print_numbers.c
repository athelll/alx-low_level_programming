#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int a;

	if (separator == NULL)
		return;

	va_start(ap, n);

	for(a = 0; a < n; a++)
	{
		if (a == n - 1)
		{
			printf("%d", va_arg(ap, int));
			break;
		}
		printf("%d%s", va_arg(ap, int), separator);
	}
	printf("\n");

	va_end(ap);
}
