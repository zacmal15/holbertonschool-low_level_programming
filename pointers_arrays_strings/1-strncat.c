#include "main.h"

/**
 * _strncat - concatenates two strings using at most n bytes from src
 * @dest: destination buffer
 * @src: source string
 * @n: max number of bytes to use from src
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *start = dest;

	while (*dest != '\0')
		dest++;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';
	
	return (start);
}
