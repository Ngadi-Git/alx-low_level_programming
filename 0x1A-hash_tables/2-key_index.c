#include "hash_tables.h"

/**
 * key_index - Get the index at which a key/value pair should
 *             be stored in array of a hash table.
 * @key: The key to retrive the index of.
 * @size: The size of the array of the hash table.
 *
 * Return: The index corresponding to the hash of the key in the array.
 *
 * Description: Uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
