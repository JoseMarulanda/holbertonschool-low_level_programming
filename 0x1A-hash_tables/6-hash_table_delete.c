#include "hash_tables.h"
/***
 * hash_table_delete - deletes a hash table.
 * @ht: is the hash table
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node;
	int index;

	if ( ht == NULL)
		return;
	while (index < ht->size)
	{
		while (ht->array[index] != NULL)
		{
			node = ht->array[index];
			free(node->key);
			free(node->value);
			ht->array[index] = ht->array[index]->next;
			free(node);
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
