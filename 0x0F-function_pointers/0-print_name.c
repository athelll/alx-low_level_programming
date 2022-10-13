#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * print_name - prints a name using a function callback
  * @name: name Parameter
  * @f: function parameter
  * Return: returns void
  */

void print_name(char *name, void (*f)(char *))
{
	void (*print)(char *);

	print = f;
	print(name);
}
