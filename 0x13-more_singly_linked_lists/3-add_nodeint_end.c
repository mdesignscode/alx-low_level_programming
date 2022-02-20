#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - adds a new node at the end of a listint_t list.
 * @head: pointer to linked list.
 * @n: value to be added the list.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	struct listint_s *newnode, *temp;

	temp = *head;
	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;

	if (!(*head))
		*head = newnode;
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = newnode;
	}
	return (newnode);
}
