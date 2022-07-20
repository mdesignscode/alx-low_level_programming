#include "hash_tables.h"

void insert_node(hash_node_t **head, char *key, char *value);

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to.
 * @key: the key. key can not be an empty string.
 * @value: the value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	u_long index;
	node_pointer head;

	if (!strlen(key) || !key || !value || !ht)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	head = ht->array[index];
	while (head)
	{
		if (!strcmp(head->key, key))
		{
			head->value = strdup(value);
			return (1);
		}
		head = head->next;
	}

	if (!ht->array[index])
	{
		head = 0;
		insert_node(&head, strdup(key), strdup(value));
		ht->array[index] = head;
		return (1);
	}
	else
	{
		head = ht->array[index];
		insert_node(&head, strdup(key), strdup(value));
		ht->array[index] = head;
		return (1);
	}

	return (0);
}
