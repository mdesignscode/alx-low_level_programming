#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: hash table you want to look into.
 * @key: the key you are looking for.
 *
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	node_pointer temp;

	temp = ht->array[key_index((unsigned char *)key, ht->size)];
	while (temp)
	{
		if (_strcmp(temp->key, key) == 1)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
