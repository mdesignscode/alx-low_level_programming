#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index of a
 * dlistint_t linked list.
 * @head: pointer to linked list.
 * @index: the index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	d_l_pointer temp, next;
	unsigned int traverse;

	if (!*head)
		return (1);

	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		temp = NULL;
		return (1);
	}
	else
	{
		for (traverse = 0; traverse < index - 1; traverse++)
			temp = temp->next;
		next = temp->next->next;
		temp->next = next;
		next->prev = temp;
		return (1);
	}
	return (0);
}
