#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t linked list.
 * @head: pointer to list.
 * @index: the index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	struct listint_s *nextnode, *temp, *to_remove;
	unsigned int ctr = 1;

	temp = *head;
	if (index == 0)
	{
		if (!(*head))
			return (-1);
		*head = (*head)->next;
		free(temp);
	}
	else
	{
		while (ctr < index)
		{
			ctr++;
			temp = temp->next;
		}
		to_remove = temp->next;
		if (!to_remove)
			return (-1);
		nextnode = to_remove->next;
		free(to_remove);
		temp->next = nextnode;
	}
	return (1);
}
