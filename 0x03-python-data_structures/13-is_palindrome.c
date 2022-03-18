#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * is_palindrome - checks if a singly linked list is a palindrome.
 * @head: linked list.
 *
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome.
 */
int is_palindrome(listint_t **head)
{
	listint_t *temp;
	int *space;
	int count, index = 0, ctr;

	if (!(*head))
		return (1);

	temp = *head;
	count = 0;
	while (temp)
		count++, temp = temp->next;

	space = malloc(sizeof(int) * count);
	if (!space)
		return (0);

	temp = *head;
	while (temp)
	{
		space[index] = temp->n;
		index++;
		temp = temp->next;
	}

	index = 0;
	ctr = count - 1;
	while (index < count / 2)
	{
		if (space[index] != space[ctr])
			return (0);
		ctr--;
		index++;
	}
	return (1);
}
