#include <stdio.h>
/**
 * main - use putchar
 * Description: print all base 10 single digits
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int nl;

	nl = '\n';
	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar(nl);
	return (0);
}
