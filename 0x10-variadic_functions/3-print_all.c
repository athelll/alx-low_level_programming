#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

/**
  * pt_char - prints character
  * @list: variadic list
  */
void pt_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
  * pt_integer - prints character
  * @list: variadic list
  */
void pt_integer(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
  * pt_float - prints character
  * @list: variadic list
  */
void pt_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
  * pt_string - prints character
  * @list: variadic list
  */
void pt_string(va_list list)
{
	char *c;

	c = va_arg(list, char *);

	if (c == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", c);
}

/**
  * print_all - prints above datatypes
  * @format : datatype format to be printed
  * @... : Variadic Arguments.
  */
void print_all(const char * const format, ...)
{
	int a = 0, b;
	va_list list;
	char *separator = "";

	datatypes types[] = {	{'c', pt_char},
				{'i', pt_integer},
				{'f', pt_float},
				{'s', pt_string},
				{'\0', NULL}};

	va_start(list, format);

	while (format[a] != '\0' && format != NULL)
	{
		b = 0;
		while (types[b].keyword != '\0')
		{
			if (format[a] == types[b].keyword)
			{
				printf("%s", separator);
				types[b].function(list);
				separator = ", ";
			}
			b++;
		}
		a++;
	}

	va_end(list);

	printf("\n");
}

