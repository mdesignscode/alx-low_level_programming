#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line.
 *
 * @n: number to start printing from.
 *
 * Return: Always 0.
 *
 */
void print_to_98(int n)
{
	int i, j;

	for (i = n; i < 99; i++)
	{
		printf("%d", i);

		if (i < 98)
		{
			putchar(44);
			putchar(32);
		}
	}

	for (i = n, j = 0; i > 97; i--, j++)
	{
		if (n > 98)
		{
			if (j > 0)
			{
				putchar(44);
				putchar(32);
			}

			printf("%d", i);
		}
	}
	putchar(10);
}
