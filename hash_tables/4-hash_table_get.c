#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
/**
* hash_table_get - retrieves a value associated with a key.
* @ht: the hash table
* @key: the key you are looking for
*
* Return: the value associated with the key or NULL
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}
	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current != NULL)
	{
	if (strcmp(current->key, key) == 0)
	{
		return (current->value);
	}
	current = current->next;
	}

	return (NULL);
}
