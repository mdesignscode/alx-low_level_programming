#include "main.h"
/**
 * _strncat - concatenates teo strings.
 * @dest: destination pointer.
 * @src: source pointer.
 * @n: bytes to be used from src.
 *
 * Return: ALways 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int destLen;
	int i;

	i = 0;
	destLen = 0;
	while (dest[destLen] != '\0')
	{
		destLen++;
	}
	while (i < n && src[i] != '\0')
	{
		dest[destLen + i] = src[i];
		i++;
	}
	dest[destLen + i] = '\0';
	return (dest);
}
