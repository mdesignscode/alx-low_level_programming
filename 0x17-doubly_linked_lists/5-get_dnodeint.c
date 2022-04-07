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
	unsigned int i;
	d_l_pointer temp;

	temp = head;
	for (i = 0; i < index; i++)
		temp = temp->next;
	if (!temp)
		return NULL;
	return (temp);
}
