#include <stdio.h>
/**
 * primeFactors - finds the largest prime factor.
 *
 * main - finds and prints the largest prime factor of the number 612852475143.
 * @n: integer to be tested.
 *
 * Return: nothing.
 */
void primeFactors(long int n)
{
	long int l;
	int i;

	for (i = 2; n > 1; i++)
	{
		l = 0;
		while (n % i == 0)
		{
			if (n > l)
				l = n;
			n = n / i;
		}
	}
	printf("%ld\n", l);
}
/**
 * main - finds and prints the largest prime factor of the number 612852475143.
 *
 * primeFactors - finds the largest prime factor.
 *
 * Return: nothing.
 */
int main(void)
{
	primeFactors(612852475143);
	return (0);
}
