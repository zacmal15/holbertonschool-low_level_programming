#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - creates new hash table
 * @size: size of array in hash table
 *
 * Return: pointer to newly created hash table, otherwise NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i;

	/* check if size is 0 (invalid) */
	if (size == 0)
		return (NULL);

	/* allocate memory for hash table structure */
	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	/* allocate memory for array of pointers */
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	/* initialise all array elements to NULL */
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	/* set size of hash table */
	ht->size = size;

	return (ht);
}
