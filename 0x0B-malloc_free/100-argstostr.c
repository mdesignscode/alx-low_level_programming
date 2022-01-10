#include <stdlib.h>
#include "holberton.h"
/**
 * argstostr - concatenates all the arguments of my program.
 * @ac: argument count.
 * @av: argument vector.
 * Return: 0.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, l;
	char* p;

	l = 0;
	for (i = 0; i < ac; i++, l++)
	{
		for (j = 0; av[i][j]; j++, l++)
			;
	}
	p = malloc(sizeof(char) * l);
	k = 0;
	for (i = 0; i < ac; i++, k++)
	{
		for (j = 0; av[i][j]; j++, k++)
			p[k] = av[i][j];
		p[k] = '\n';
	}
	p[k] = '\0';
	if (!ac || !av || !p)
		return (NULL);
	return (p);
}
