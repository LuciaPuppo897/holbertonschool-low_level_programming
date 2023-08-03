#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_set - function that add an element to the hash table
 * @ht: hash table to modify
 * @key:key to add or update
 * @value:value to asociate with the key
 * Return: 1 if succes  or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *val = NULL;
	unsigned int index = 0;
	hash_node_t *current = NULL;
	hash_node_t *n_node = NULL;

	if (ht == NULL || key == NULL || *key == '\0')
	{
	return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);

	current = ht->array[index];

	while (current != NULL)
	{
	if (strcmp(current->key, key) == 0)
	{
	val = strdup(value);
	if (val == NULL)
	{
		return (0);
	}
	free(current->value);
		current->value = val;
		return (1);
	}
	current = current->next;
	}

	n_node = malloc(sizeof(hash_node_t));
	if (n_node == NULL)
	{
	return (0);
	}
n_node->key = strdup(key);
n_node->value = strdup(value);
n_node->next = ht->array[index];
ht->array[index] = n_node;
return (1);
}
