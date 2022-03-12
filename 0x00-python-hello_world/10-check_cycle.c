#include "lists.h"
/**
 * check_cycle - checks if a singly linked list has a cycle in it.
 * @list: list to be checked.
 *
 * Return: 0 if there is no cycle, 1 if there is a cycle.
 */
int check_cycle(listint_t *list)
{
	listint_t *slow_pointer, *fast_pointer;

	slow_pointer = fast_pointer = list;

	while (fast_pointer && fast_pointer->next && slow_pointer)
	{
		slow_pointer = slow_pointer->next;
		fast_pointer = fast_pointer->next->next;
		if (fast_pointer == slow_pointer)
			return (1);
	}

	return (0);
}
