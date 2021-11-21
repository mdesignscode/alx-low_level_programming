#include "main.h"
/**
 * _strcmp - compares two strings.
 * @s1: string 1.
 * @s2: string 2.
 *
 * Return: ALways 0.
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i] != '\0' && s2[j] != '\0')
	{
		if (s1[i] < s2[j])
		{
			return (-15);
		}
		if (s1[i] == s2[j])
		{
			return (0);
		}
		if (s1[i] > s2[j])
		{
			return (15);
		}
		i++;
		j++;
	}
	return (0);
}
