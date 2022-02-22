#include "lists.h"
/**
 * free_list - frees a list_t list.
 * @head: pointer to first node.
 *
 * Return: nothing.
 */
void free_list(list_t *head)
{
	struct list_s *temp, *current;

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
