#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @idx: the index of the list where the new node should be added.
 * @head: pointer to list.
 * @n: the value of the new node.
 *
 * Return: the address of the new node, or NULL if it failed.
 *
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	struct listint_s *new_node, *temp, *store_next;
	unsigned int index = 1;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	temp = *head;
	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		*head = new_node;
		new_node->next = temp;
	}

	if (!!temp)
	{
		while (index < idx)
		{
			temp = temp->next;
			index++;
		}

		store_next = temp->next;
		temp->next = new_node;
		new_node->next = store_next;
	}

	else
		return (NULL);

	return (new_node);
}
