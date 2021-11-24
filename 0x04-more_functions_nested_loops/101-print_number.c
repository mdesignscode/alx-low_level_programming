#include "main.h"
#include <stdio.h>
/**
 * print_number - prints an integer.
 *
 * Return: Always 0.
 *
 */
void print_number(int n)
{

	unsigned int temp = n;

	if (n < 0)
	{
	temp = -temp;
	_putchar('-');
	}
	if ((temp / 10) > 0)
		print_number(temp / 10);
	_putchar('0' + (temp % 10));

}
