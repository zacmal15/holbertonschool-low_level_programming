#include "main.h"

/**
 * _strpbrk - searches string for any set of bytes
 * @s: string to scan
 * @accept: string containing bytes to match
 *
 * Return: pointer to byte in s that matches one of
 * bytes in accept, or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}

	return (NULL);
}
