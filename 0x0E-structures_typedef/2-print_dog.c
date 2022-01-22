#include <stdio.h>
#include "dog.h"
#define NC(v) (v ? v : "nil")
/**
 * print_dog - prints a struct dog.
 * @d: pointer to structure.
 *
 * Return: nothing.
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n", NC(d->name), d->age, NC(d->owner));
	}
}
