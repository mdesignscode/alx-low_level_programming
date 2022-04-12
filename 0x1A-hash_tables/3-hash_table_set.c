#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table.
 * Description: key cannot be an empty string, but value can be.
 * If there's a collision, the node will be added to the head of the list.
 * @value: the value associated with the key.
 * @key: the key.
 * @ht: the hash table you want to add or update the key/value to.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	node_pointer new_node, first_address;
	unsigned long int mapped;
	char *val, *k;

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	val = scopy(value);
	k = scopy(key);

	mapped = key_index(key, ht->size);

	new_node->key = k;
	new_node->value = val;
	new_node->next = NULL;

	first_address = ht->array[mapped];

	if (!first_address)
	{
		first_address = new_node;
		return (1);
	}
	else
	{
		new_node->next = first_address;
		first_address = new_node;
		return (1);
	}

	return (0);
}
