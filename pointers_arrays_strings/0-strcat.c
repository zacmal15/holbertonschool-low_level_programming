#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination buffer
 * @src: source string to join to dest
 *
 * Return: Pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	char *start = dest;

	while (*dest != '\0')
		dest++;

	while (src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (start);
}
