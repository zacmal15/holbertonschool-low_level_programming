#include "hash_tables.h"

/**
 * key_index - gives index of key in hash table
 * @key: key to get index for
 * @size: size of hash table array
 *
 * Return: index where the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;
	unsigned long int index;

	/* get hash value of key using djb2 */
	hash_value = hash_djb2(key);

	/* reduce hash value to valid array index */
	index = hash_value % size;

	return (index);
}
