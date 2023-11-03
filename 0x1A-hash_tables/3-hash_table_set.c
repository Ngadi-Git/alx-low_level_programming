#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element to or in  a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: 1 upon success, 0 otherwise..
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *hnt;
	char *v_copy;
	unsigned long int idx, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	v_copy = strdup(value);
	if (v_copy == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	for (i = idx; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = v_copy;
			return (1);
		}
	}

	hnt = malloc(sizeof(hash_node_t));
	if (hnt == NULL)
	{
		free(v_copy);
		return (0);
	}
	hnt->key = strdup(key);
	if (hnt->key == NULL)
	{
		free(hnt);
		return (0);
	}
	hnt->value = v_copy;
	hnt->next = ht->array[idx];
	ht->array[idx] = hnt;

	return (1);
}
