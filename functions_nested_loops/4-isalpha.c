#include "main.h"

/**
 * _isalpha - checks for a character in the alphabet
 * @c: is the character to check
 *
 * Return: 1 if true. 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	return (0);
}
