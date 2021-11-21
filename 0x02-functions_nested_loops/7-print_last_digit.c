#include "main.h"
/**
 * _abs - prints the absolute value of a digit
 * @n: interger to be tested
 *
 * Return: value of the last digit
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n * n);
}
/**
 * print_last_digit - prints the last digit of a number
 * @n: interger to be tested
 * Return: last digit of n
 */

int print_last_digit(int n)
{
	int lD;

	lD = _abs((n % 10));
	_putchar(lD);
	return (lD);
}
