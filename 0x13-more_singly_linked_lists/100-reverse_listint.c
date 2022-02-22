#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to list.
 *
 * Return: a pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	struct listint_s *previous, *next;

	previous = next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}
	*head = previous;
	return (*head);
}
