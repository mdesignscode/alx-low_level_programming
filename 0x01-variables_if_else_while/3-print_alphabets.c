#include <stdio.h>
/**
 * main - use putchar
 * Description: print the alphabet in lowercase then uppercase
 * Return: Always 0.
 */
int main(void)
{
	int az;
	int nl;

	nl = '\n';
	for (az = 'a'; az <= 'z'; az++)
	{
		putchar(az);
	}
	for (az = 'A'; az = 'Z'; az++)
	{
		putchar(az);
	}
	putchar(nl);
	return (0);
}
