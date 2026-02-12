#include "amin.h"
/**
 * _islower - checks for lowercase letters
 * @c: character to check
 *
 * Return: 1 if lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	return (0);
}
