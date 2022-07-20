#include "hash_tables.h"

/**
 * insert_node - inserts a node at head of linked list.
 * @head: linked list.
 * @key: key to be added.
 * @value: value associated with key.
 *
 * Return: nothing.
 */
void insert_node(hash_node_t **head, char *key, char *value)
{
	node_pointer new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return;

	new_node->key = key;
	new_node->value = value;
	new_node->next = *head;

	*head = new_node;
}

/**
 * hash_table_create - creates a hash table.
 * @size: the size of the array.
 *
 * Return: a pointer to the newly created hash table or
 * NULL if something went wrong.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_pointer table;
	unsigned long int index;

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (!table->array)
		return (NULL);

	for (index = 0; index < size; index++)
	{
		table->array[index] = 0;
	}

	return (table);
}
