#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to linked list.
 *
 * Return: nothing.
 */
void free_dlistint(dlistint_t *head)
{
	/**
	 * traverse list till end
	 * 	store temp->next in next
	 * 	free(temp)
	 * 	move temp forward
	 */
	d_l_pointer temp, next;

	temp = head;
	while (temp)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
}
