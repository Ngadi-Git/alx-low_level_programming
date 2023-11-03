#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table to print.
 *
 * Description: Key/value pairs are printed according to their 
 * 		sequence in the array of the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *hnt;
	unsigned long int idx;
	unsigned char c_flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (idx = 0; idx < ht->size; idx++)
	{
		if (ht->array[idx] != NULL)
		{
			if (c_flag == 1)
				printf(", ");

			hnt = ht->array[idx];
			while (hnt != NULL)
			{
				printf("'%s': '%s'", hnt->key, hnt->value);
				hnt = hnt->next;
				if (hnt != NULL)
					printf(", ");
			}
			c_flag = 1;
		}
	}
	printf("}\n");
}
