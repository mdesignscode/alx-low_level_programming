#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to first node.
 * @str: string to be added to linked list.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	struct list_s *ptr, *temp;
	char* dups;

	ptr = *head;
	if (!str)
		return (NULL);

	temp = malloc(sizeof(list_t));
	if (!temp)
		return (NULL);

	dups = strdup(str);

	temp->str = dups;
	temp->len = _strlen(dups);
	temp->next = NULL;

	if (!(*head))
		*head = temp;
	else
	{
		while (!!ptr->next)
			ptr = ptr->next;
		ptr->next = temp;
	}
	return (temp);
}
