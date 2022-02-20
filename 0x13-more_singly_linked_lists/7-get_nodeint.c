#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @index: the index of the node, starting at 0.
 * @head: pointer to linked list.
 *
 * Return: address to node at index, or NULL if node doesn't exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	struct listint_s *temp;
	unsigned int count;

	temp = head;
	count = 0;

	if (!temp)
		return (NULL);

	while (temp->next)
	{
		if (count == index)
			return (temp);
		count++;
		temp = temp->next;
	}
	if (!count)
		return (NULL);
	return (temp);
}
