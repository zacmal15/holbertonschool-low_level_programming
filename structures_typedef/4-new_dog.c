#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: length
 */
static int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * _memcpy_str - copies a string including the null terminator
 * @dest: destination buffer
 * @src: source string
 */
static void _memcpy_str(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

/**
 * new_dog - creates a new dog (deep copies name and owner)
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *block;
	int name_len, owner_len;
	unsigned long total;

	if (name == NULL || owner == NULL)
		return (NULL);

	name_len = _strlen(name);
	owner_len = _strlen(owner);

	total = sizeof(dog_t) + (name_len + 1) + (owner_len + 1);

	block = malloc(total);
	if (block == NULL)
		return (NULL);

	d = (dog_t *)block;

	d->name = block + sizeof(dog_t);
	d->owner = d->name + name_len + 1;
	d->age = age;

	_memcpy_str(d->name, name);
	_memcpy_str(d->owner, owner);

	return (d);
}
