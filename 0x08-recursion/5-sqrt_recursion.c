#include "main.h"
/**
 * add_fun - additional_function.
 * @a: integer to be tested.
 * @b: integer to be tested.
 *
 * Return: 1 or -1.
 */
int add_fun(int a, int b)
{
	if ((a * a) == b)
		return (a);

	else if (a * a > b)
		return (-1);
	else
		return (add_fun(a + 1, b));
}

/**
 * _sqrt_recursion - find natural square root
 * @n: int
 * @val: square root
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (add_fun(1, n));
}
