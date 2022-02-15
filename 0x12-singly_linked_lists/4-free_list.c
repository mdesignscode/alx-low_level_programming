#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees a list_t list.
 * @str: pointer to first node.
 *
 * Return: nothing.
 */
void free_list(list_t *head)
{
	list_p temp, current;

	current = head;

	while (current)
	{
		temp = current;
		free(temp->str);
		current = current->next;
		free(temp);
	}
	head = NULL;
}
