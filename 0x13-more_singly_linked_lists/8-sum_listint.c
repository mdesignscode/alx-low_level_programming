#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - returns the sum of all the data (n) of a listint_t list.
 * @head: pointer to linked list.
 *
 * Return: the sum of all data, or 0 if list is empty.
 */
int sum_listint(listint_t *head)
{
	struct listint_s *temp;
	int sum, data;

	temp = head;
	sum = 0;

	while (temp)
	{
		data = temp->n;
		sum += data;
		temp = temp->next;
	}

	return (sum);
}
