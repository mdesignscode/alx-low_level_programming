#include "main.h"
/**
 * add_fun - additional_function.
 * @j: integer to be mod divided.
 * @i: divider.
 *
 * Return: 1 or 0.
 */
int add_fun(int i, int j)
{
	if (j != 1)
	{
		if (i == j)
		{
			return (1);
		}
		else if (j % i == 0 || j <= 1)
		{
			return (0);
		}
		else
		{
			return (add_fun(i + 1, j));
		}
	}
	return (0);
}
/**
 * is_prime_number - returns 1 if input integer is prime number.
 * @n: integer to be tested.
 *
 * Return: 0 or 1.
 */
int is_prime_number(int n)
{
	return (add_fun(2, n));
}
