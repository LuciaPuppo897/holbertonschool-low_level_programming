#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current, *temp;

	if (ht == NULL)
	return;

	for (i = 0; i < ht->size; i++)
	{
	current = ht->array[i]; /* mientras exista una ht q apunte a algo*/

	while (current != NULL)
	{
	temp = current;
	current = current->next;
	free(temp->key);
	free(temp->value);
	free(temp);
	}
	}
	free(ht->array);
	free(ht);
}
