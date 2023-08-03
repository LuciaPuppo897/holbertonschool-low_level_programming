#include "hash_tables.h"
#include <stdlib.h>
/**
 *hash_table_create - creates a hash table
 *@size: size of the array
 *Return: a pointer to new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	new_table = (hash_table_t *)malloc(sizeof(hash_table_t));
if (new_table == NULL)
	{
	return (NULL); /** similar to linked list*/
	}
	new_table->size = size;
	new_table->array = (hash_node_t **)calloc(size, sizeof(hash_node_t *));
	if (new_table->array == NULL)
	{
	free(new_table);
	return (NULL);
	}
	return (new_table);
}
