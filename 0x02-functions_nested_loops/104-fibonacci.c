#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: 0.
 */
int main(void)
{
	unsigned long int a = 1, b = 2, c, sum;

	printf("%lu, %lu, ", a, b);

	for (c = 3; c <= 98; c++)
	{
		sum = a + b;
		printf("%lu", sum);

		a = b;
		b = sum;

		if (c < 98)
		{
			putchar(44);
			putchar(32);
		}
	}

	putchar(10);
	return (0);
}
