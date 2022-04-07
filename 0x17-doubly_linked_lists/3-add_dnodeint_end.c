#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to linked list.
 * @n:list data to be added
 *
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	d_l_pointer new_node, temp;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return NULL;
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
		return (*head);
	}
	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = new_node;
	new_node->prev = temp;
	return (new_node);
}
