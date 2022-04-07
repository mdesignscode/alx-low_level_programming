#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t linked list.
 * @head: pointer to linked list.
 *
 * Return: sum of all data, or 0 if list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	d_l_pointer temp;
	int result;

	if (!head)
		return (0);

	temp = head;
	result = 0;

	while (temp)
	{
		result += temp->n;
		temp = temp->next;
	}

	return (result);
}
