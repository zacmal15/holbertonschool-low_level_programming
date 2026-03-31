#include "hash_tables.h"

/**
 * hash_djb2 - implements djb2 algorithm
 * @str: pointer to string to hash
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	/* starting value used by djb2 */
	hash = 5381;

	/* read each character until null terminator */
	while (*str != '\0')
	{
		c = *str;
		hash = ((hash << 5) + hash) + c;
		str++;
	}

	return (hash);
}
