#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to first node.
 * @str: string to be added to linked list.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{

	struct list_s *newnode;
	unsigned int index = 0;

	if (!str)
		return (NULL);

	newnode = malloc(sizeof(list_t));
	if (!newnode)
		return (NULL);
	newnode->str = strdup(str);
	newnode->next = NULL;

	while (newnode->str[index])
		index++;
	newnode->len = index;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
