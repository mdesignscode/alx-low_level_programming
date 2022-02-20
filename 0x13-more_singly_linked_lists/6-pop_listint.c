#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of a listint_t linked list
 *  and returns the head node’s data (n).
 * @head: head to be removed.
 *
 * Return: data(n), or 0 if the linked list is empty.
 */
int pop_listint(listint_t **head)
{
	struct listint_s *temp;
	int data;

	temp = *head;
	data = temp->n;

	if (!(*head))
		return (0);
	*head = temp->next;
	free(temp);
	return (data);
}
