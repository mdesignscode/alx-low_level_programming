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

	for (; s[len++];)
		;

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
	char_pointer copy;

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
 * _strcmp - checks if two strings are equal.
 * @str1: string 1.
 * @str2: string 2.
 *
 * Return: 1 if true or 0 if false.
 */
int _strcmp(const char *str1, const char *str2)
{
	int len, index;

	len = _strlen(str1);

	if (_strlen(str2) != len)
		return (0);

	for (index = 0; index < len; index++)
	{
		if (str1[index] != str2[index])
			return (0);
	}

	return (1);
}
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
	u_long index;
	node_pointer head;

	if (_strlen(key) == 0 || !key || !value || !ht)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	head = ht->array[index];
	while (head)
	{
		if (_strcmp(head->key, key) == 1)
		{
			head->value = scopy(value);
			return (1);
		}
		head = head->next;
	}

	if (!ht->array[index])
	{
		head = 0;
		insert_node(&head, scopy(key), scopy(value));
		ht->array[index] = head;
		return (1);
	}
	else
	{
		head = ht->array[index];
		insert_node(&head, scopy(key), scopy(value));
		ht->array[index] = head;
		return (1);
	}
	return (0);
}
