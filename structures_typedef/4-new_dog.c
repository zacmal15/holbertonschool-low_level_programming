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
 * _copy_str - copies a string including the null terminator
 * @dest: destination buffer
 * @src: source string
 */
static void _copy_str(char *dest, char *src)
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
	char *p;
	int name_len, owner_len;
	unsigned long total;

	if (name == NULL || owner == NULL)
		return (NULL);

	name_len = _strlen(name);
	owner_len = _strlen(owner);

	total = sizeof(*d) + (name_len + 1) + (owner_len + 1);

	d = malloc(total);
	if (d == NULL)
		return (NULL);

	p = (char *)d + sizeof(*d);

	d->name = p;
	d->owner = p + name_len + 1;
	d->age = age;

	_copy_str(d->name, name);
	_copy_str(d->owner, owner);

	return (d);
}
