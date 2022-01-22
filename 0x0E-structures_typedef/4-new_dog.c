#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - counts the length of a string.
 * @s: string to be counted.
 *
 * Return: length of string.
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;

	return (len);
}
/**
 * scopy - copies a string in memory.
 * @src: source string.
 * @dest: destination string.
 *
 * Return: pointer to copy of string.
 */
char *scopy(char *src)
{
	int len, index;
	char *copy;

	if (!src)
		return (NULL);
	len = _strlen(src) + 1;
	copy = malloc(sizeof(char) * len);
	if (!copy)
		return (NULL);

	for (index = 0; index < len; index++)
		copy[index] = src[index];

	return (copy);
}
/**
 * new_dog - creates a new dog.
 * @name: name of dog.
 * @age: age of dog.
 * @owner: owner of dog.
 *
 * Return: structure variable, NULL if function fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	/**
	 * create space for size of new_dog
	 * store copy of name and owner
	 * RETURN null if space fails
	 *
	 */
	new_dog = malloc(sizeof(dog_t));
	if (!new_dog)
		return (NULL);

	new_dog->name = scopy(name);
	if (!new_dog->name)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = scopy(owner);
	if (!new_dog->owner)
	{
		free(new_dog);
		return (NULL);
	}
	(*new_dog).age = age;
	return (new_dog);
}
