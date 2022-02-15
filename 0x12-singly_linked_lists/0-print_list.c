#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: a pointer to the list to be printed.
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	int count;

	count = 0;
	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
			h = h->next;
			count++;
		}
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
