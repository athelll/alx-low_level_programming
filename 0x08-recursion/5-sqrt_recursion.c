#include "main.h"

/**
* find_root- finds root of parameter n
* @n: Parameter to be rooted
* @root: Parameter that will be recursed to obtain root
* Return: returns the root.
*/

int find_root(int n, int root)
{
	if (root * root > n)
		return (-1);
	if (root * root == n)
		return (root);

	return (find_root(n, root + 1));
}

/**
* _sqrt_recursion- finds the square_root of Parameter
* @n using find_root function above
* ----------------------------------------------------
* @n: Parameter to be rooted
* Return: returns the root.
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_root(n, 0));
}
