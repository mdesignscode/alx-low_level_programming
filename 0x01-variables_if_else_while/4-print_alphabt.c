#include <stdio.h>
/**
 * main - use putchar
 * Description: Print all the letters except q and e
 * Return: Always 0.
 */
int main(void)
{
	int ch;
	int nl;

	nl = '\n';
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if ((ch != 'e') && (ch != 'q'))
		{
			putchar(ch);
		}
	}
	putchar(nl);
	return (0);
}
