#include "main.h"

/**
 * puts_half - print second half of string
 * @str: points to string
 */
void puts_half(char *str)
{
	int length;
	int start;
	int i;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	start = (length + 1) / 2;

	for (i = start; i < length; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
