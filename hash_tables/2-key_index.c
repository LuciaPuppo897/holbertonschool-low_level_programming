#include "hash_tables.h"
#include <stdio.h>

/**
 *key_index - creates an index for the has table
 *@key: key of the hast table
 *@size: size of the ht
 *Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = hash_djb2(key);
	unsigned long int index = hash_value % size; /**make sure it falls into ht*/

	return (index);
}
