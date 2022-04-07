#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to linked list.
 * @index: index of node to retrieve
 *
 * Return: the nth node or NULL if node doesn't exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i, nodes = 0;
	d_l_pointer temp;

	temp = head;
	while (temp)
	{
		nodes++;
		temp = temp->next;
	}
	if (index > nodes)
		return NULL;

	temp = head;
	for (i = 0; i < index; i++)
		temp = temp->next;

	return (temp);
}
