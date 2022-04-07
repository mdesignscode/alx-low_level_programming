#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: pointer to linked list.
 *
 * Return: number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int nodes;

	nodes = 0;
	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
