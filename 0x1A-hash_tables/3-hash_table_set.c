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
 * new_t_node - creates a new_node.
 * @key: key of table.
 * @value: value of key.
 * @head: linked list.
 *
 * Return: pointer to new node.
 */
hash_node_t *new_t_node(hash_node_t *head, char *key, char *value)
{
	node_pointer new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (NULL);

	new_node->key = key;
	new_node->value = value;
	new_node->next = head;

	return (new_node);
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
	node_pointer head, temp, new_node;
	char_pointer val, k;
	unsigned long int mapped;

	if (_strlen(key) == 0 || !key || !ht)
		return (0);

	val = scopy(value);
	k = scopy(key);

	mapped = key_index((unsigned char *)key, ht->size);
	head = ht->array[mapped];
	temp = head;

	while (temp)
	{
		if (_strcmp(temp->key, k) == 1)
		{
			temp->value = val;
			return (1);
		}
		temp = temp->next;
	}

	new_node = new_t_node(head, k, val);
	if (!new_node)
		return (0);

	ht->array[mapped] = new_node;

	return (1);
}
