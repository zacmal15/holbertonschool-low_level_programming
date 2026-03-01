#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to duplicated string
 * @str: string to duplicate
 *
 * Return: pointer to newly duplicated string, or NULL if fail
 */
char *_strdup(char *str)
{
	char *copy;
	unsigned int len;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len] != '\0')
		len++;

	copy = malloc((len + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		copy[i] = str[i];

	return (copy);
}
