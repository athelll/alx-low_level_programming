#include "3-calc.h"
#include <stdlib.h>

/**
  * op_add - adds arguments
  * @a: integer
  * @b: integer
  * Return: result
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - subtracts arguments
  * @a: integer
  * @b: integer
  * Return: result
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - mutiplies arguments
  * @a: integer
  * @b: integer
  * Return: result
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - divides arguments
  * @a: integer
  * @b: integer
  * Return: result
  */
int op_div(int a, int b)
{
	return (a / b);
}

/**
  * op_mod - modules arguments
  * @a: integer
  * @b: integer
  * Return: result
  */
int op_mod(int a, int b)
{
	return (a % b);
}
