#include "hash_tables.h"

/**
 * delete_linked_list - deletes a linked list.
 * @head: linked list to be removed.
 *
 * Return: nothing.
 */
void delete_linked_list(hash_node_t *head)
{
	node_pointer next;

	while (head)
	{
		next = head->next;
		free(head->key);
		free(head->value);
		free(head);
		head = next;
	}
}
/**
 * hash_table_delete - deletes a hash table.
 * @ht: table to delete.
 *
 * Return: nothing.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
		delete_linked_list(ht->array[i]);


	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
