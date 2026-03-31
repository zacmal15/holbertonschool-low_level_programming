#include "hash_table.h"
#include <string.h>

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: pointer to hash table
 * @key: key to search for
 *
 * Return: value associated with key, otherwise NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	/*check for invalid input */
	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	/* get index using key_index */
	index = key_index((const unsigned char *)key, ht->size);

	/* go to linked list at index */
	node = ht->array[index];

	/* traverse the linked list */
	while (node != NULL)
	{
		/* compare keys */
		if (strcmp(node->key, key) == 0)
			return (node->value);

		node = node->next;
	}

	return (NULL);
}
