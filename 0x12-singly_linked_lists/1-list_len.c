#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: pointer to linked list.
 *
 * Return: number of elements in a linked list_t list.
 */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h->next)
	{
		h = h->next;
		count++;
	}
	h = h->next;
	count++;
	return (count);
}
