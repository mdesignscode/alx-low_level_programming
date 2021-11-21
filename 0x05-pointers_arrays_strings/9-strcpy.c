#include "main.h"
/**
 * _strcpy - copies the string pointed to by src, including the terminating
 *  null byte (\0), to the buffer pointed to by dest.
 * @src: character pointer to be copied.
 * @dest: buffer pointed to by to be copied to.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = -1;
	do
	{
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}
