#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees a listint_t list.
 * @head: pointer to list to be freed.
 *
 * Return: nothing.
 */
void free_listint(listint_t *head)
{
	struct listint_s *temp;

	temp = head;

	while (temp)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
	head = NULL;
}
