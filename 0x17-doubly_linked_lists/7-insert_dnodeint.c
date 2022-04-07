#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to linked list.
 * @idx: the index of the list where the new node should be added.
 * @n: value of new node.
 *
 * Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	d_l_pointer new_node, temp;
	unsigned int i;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return NULL;

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	temp = *h;
	if (temp)
	{
		for (i = 0; i < idx - 1; i++)
		{
			temp = temp->next;
		}
		new_node->next = temp->next;
		temp->next = new_node;
	}
	else
		return (NULL);
	return (new_node);
}
