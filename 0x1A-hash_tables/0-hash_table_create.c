#include "hash_tables.h"
/**
 * sentinel_list - creates a sentinel list for table elements.
 *
 * Return: pointer to new sentinel list.
 */
hash_node_t *sentinel_list()
{
	node_pointer aux;

	aux = malloc(sizeof(hash_node_t));
	if (!aux)
		return (NULL);

	aux->key = 0;
	aux->next = 0;
	aux->value = 0;
	return (aux);
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
	table->array = malloc(sizeof(hash_node_t) * size);
	if (!table->array)
	{
		free(table);
		return (NULL);
	}

	for (index = 0; index < size; index++)
	{
		table->array[index] = sentinel_list();
	}

	return (table);
}
