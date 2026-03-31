#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct hash_node_s - node of hash table
 *
 * @key: key, string (must be unique)
 * @value: value corresponding to key
 * @next: pointer to next node (for collision chaining)
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - hash table structure
 *
 * @size: size of array
 * @array: array of linked lists (for chaining)
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

/* function prototypes*/
hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
hash_node_t *create_node(const char *key, const char *value);
int update_node_value(hash_node_t *node, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);

#endif
