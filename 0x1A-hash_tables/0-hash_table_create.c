#include "hash_tables.h"

/**
 *hash_table_create - creates a hash table
 *@size: size of the array
 *@Return:  a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int index;
	hash_table_t *ht;

	if (size <= 0)
		return (NULL);
	ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL);
	ht->size = size;
	ht->array = malloc(size * sizeof(hash_node_t *));
	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}
	for (index = 0; index < size; index++)
		ht->array[index] = NULL;
	return (ht);
}
