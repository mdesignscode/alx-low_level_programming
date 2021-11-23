#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: 0.
 */
int main(void)
{
	long int a = 1, b = 2, c, sum;

	printf("%ld, %ld, ", a, b);

	for (c = 3; c <= 50; c++)
	{
		sum = a + b;
		printf("%ld", sum);

		a = b;
		b = sum;

		if (c < 50)
		{
			putchar(44);
			putchar(32);
		}
	}

	putchar(10);
	return (0);
}
