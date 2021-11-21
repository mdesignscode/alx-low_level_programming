#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 * @str: string to return.
 *
 * Return: 0.
 */
char *cap_string(char *str)
{
	int i, j;
	char delimiter[] = {" \t\n,;.!?\"(){}"};
	char *ptr = delimiter;

	for (i = 0; str[i]; ++i)
	{
		if (i == 0)
			if (str[i] >= 97 && str[i] <= 122)
				str[i] = str[i] - 32;

		for (j = 0; j < 14; j++)
		{
			if (str[i - 1] == ptr[j])
				if (str[i] >= 97 && str[i] <= 122)
					str[i] = str[i] - 32;
		}
	}

	return (str);
}
