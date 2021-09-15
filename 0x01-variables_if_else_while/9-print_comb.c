#include <stdio.h>
/**
 * main -
 * Description:
 * Return: Always 0.
 */
int main(void)
{
	int a;
	for (a = 48; a < 58; a++)
	{
		for (a = 48; a < 57; a++)
		{
			putchar(a);
			putchar(44);
			putchar(32);
		}
	}
	putchar(57);
	return (0);
}