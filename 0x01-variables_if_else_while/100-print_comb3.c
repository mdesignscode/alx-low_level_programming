#include <stdio.h>
/**
 * main - print the alphabet.
 *
 * Return: 0.
 */
int main(void)
{
	int d1, d2;

	d1 = 48;
	while (d1 < 58)
	{
		d2 = d1 + 1;
		while (d2 < 58)
		{
			putchar(d1);
			putchar(d2);
			putchar(32);
			d2++;
		}
		d1++;
	}

	putchar(10);
	return (0);
}
