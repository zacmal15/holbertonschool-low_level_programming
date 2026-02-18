#include "main.h"

/**
 * _atoi - converts string to int
 * @s: string to convert
 *
 * Return: int value
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int started = 0;

	while (*s != '\0')
	{
		if (!started && (*s == '-' || *s == '+'))
		{
			if (*s == '-')
				sign = -sign;
		}
		else if (*s >= '0' && *s <= '9')
		{
			started = 1;
			result = result * 10 + (*s - '0');
		}
		else if (started)
		{
			break;
		}

		s++;
	}

	if (!started)
		return (0);

	return (result * sign);
}
