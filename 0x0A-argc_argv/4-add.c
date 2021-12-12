#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main -adds positive numbers.
 *
 * Return: 0.
 */
int main(int argc, char **argv)
{
	int sum = 0, i, j;

	for (j = 1; j < argc; j++)
	{
		for (i = 0; argv[j][i]; i++)
		{
			if (!isdigit(argv[j][i]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
