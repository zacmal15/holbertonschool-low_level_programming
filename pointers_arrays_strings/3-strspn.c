#include "main.h"

/**
 * _strspn - gets length of prefix substring
 * @s: string to scan
 * @accept: bytes to match
 *
 * Return: number of bytes in initial segment of s
 * which consists only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int count;
	int found;

	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}

		if (found == 0)
			break;

		count++;
	}
	return (count);
}
