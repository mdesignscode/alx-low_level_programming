#include "main.h"
/**
 * _strcat - concatenates two strings.
 * @src: string to be appended.
 * @dest: string to be appended to.
 *
 * Return: ALways 0.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i++] = src[j++];
	}
	dest[i] = '\0';
	return (dest);
}
