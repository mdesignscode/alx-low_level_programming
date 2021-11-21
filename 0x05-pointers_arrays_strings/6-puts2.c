#include "main.h"
/**
 * puts2 - prints every other character of a string, starting
 * with the first character, followed by a new line.
 * @str: pointer to be tested.
 *
 * Return: ALways 0.
 */
void puts2(char *str)
{
	int i;
	int j;

	j = 0;
	while (j < 1)
	{
		for (i = 0; i < str[i]; i++)
		{
			if (i % 2 == 0)
			{
				_putchar(str[i]);
			}
		}
		j++;
	}
	_putchar('\n');
}
