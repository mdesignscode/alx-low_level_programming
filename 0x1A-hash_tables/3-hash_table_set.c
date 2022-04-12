#include "hash_tables.h"
/**
 * _strlen - counts the length of a string.
 * @s: string to be counted.
 *
 * Return: length of string.
 */
int _strlen(const char *s)
{
	int len = 0;

	while (s[len])
		len++;

	return (len);
}
/**
 * scopy - copies a string in memory.
 * @src: source string.
 *
 * Return: pointer to copy of string.
 */
char *scopy(const char *src)
{
	int len, index;
	char *copy;

	if (!src)
		return (NULL);
	len = _strlen(src) + 1;
	copy = malloc(sizeof(char) * len);
	if (!copy)
		return (NULL);

	for (index = 0; index < len; index++)
		copy[index] = src[index];

	return (copy);
}
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
	node_pointer new_node, address;
	int mapped;
	char *val, *k;

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	val = scopy(value);
	k = scopy(key);

	mapped = hash_djb2((unsigned char *) k) % ht->size;

	new_node->key = k;
	new_node->value = val;
	new_node->next = NULL;

	if (!ht->array[mapped])
	{
		ht->array[mapped] = new_node;
		return (1);
	}
	else
	{
		address = ht->array[mapped];
		new_node->next = address;
		address = new_node;
		return (1);
	}
	return (0);
}
