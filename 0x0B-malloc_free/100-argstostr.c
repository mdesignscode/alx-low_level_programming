#include <stdlib.h>
#include "holberton.h"
/**
 * argstostr - concatenates all the arguments of the program.
 * @ac: argument count.
 * @av: argument vector.
 * Return: 0.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, l = 0, c = 0;
	char *p;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			l++;
		c++;
	}

	p = malloc(sizeof(char) * c + l + 1);
	if (!ac || !av || !p)
		return (NULL);
	for (i = 0; i < ac; i++, k++)
	{
		for (j = 0; av[i][j]; j++, k++)
			p[k] = av[i][j];
		p[k] = '\n';
	}
	p[k] = '\0';
	return (p);
}
