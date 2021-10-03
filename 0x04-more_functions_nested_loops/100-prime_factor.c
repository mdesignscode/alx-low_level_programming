#include <stdio.h>
# include <math.h>
/**
 * main - finds and prints the largest prime factor of the number 612852475143.
 *
 * Return: Always 0.
 */
void primeFactors(long int n)
{
	int i;

	while (n % 2 == 0)
	{
		i = 2;
		n = n / 2;
	}
	for (i = 3; i <= sqrt(n); i++)
	{
		while (n % i == 0)
		{
			n = n / i;
			i++;
		}
	}
	if (n > 2)
	{
		printf("%ld\n", n);
	}
}
int main(void)
{
    long int n = 612852475143;
    primeFactors(n);
    return 0;
}
