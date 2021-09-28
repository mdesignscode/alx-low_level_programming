#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: Always 0.
 *
 */
void times_table(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i * 57);
		_putchar(',');
		_putchar(' ');
		_putchar('\n');
	}
}