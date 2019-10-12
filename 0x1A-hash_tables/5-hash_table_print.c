#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table.
 * @ht: is the hash table
 *
 * Return: NULL
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int multinode = 0;

	if (ht == NULL)
		return;

	printf("{");
	while (i < ht->size)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (multinode == 0)
			{
				printf("'%s' : '%s'", node->key, node->value);
				multinode = 1;
			}
			else
				printf("'%s' : '%s'", node->key, node->value);
			node = node->next;
		}
		i++;
	}
	printf("}\n");
}
