#include "main.h"

/**
 * parse_number - extracts digits and determines sign
 * @s: input tring
 * @sign: pointer to sign multiplier
 * @started: pointer to digit start flag
 *
 * Return: parsed unsigned int value
 */
static unsigned int parse_number(char *s, int *sign, int *started)
{
	unsigned int result = 0;

	while (*s != '\0')
	{
		if (!(*started) && (*s == '-' || *s == '+'))
		{
			if (*s == '-')
				*sign = -(*sign);
		}
		else if (*s >= '0' && *s <= '9')
		{
			*started = 1;
			if (result > 214748364U)
				result = 2147483647U;
			else
			{
				result = result * 10 + (unsigned int)(*s - '0');
				if (result > 2147483647U)
					result = 2147483647U;
			}
		}
		else if (*started)
		{
			break;
		}
		s++;
	}

	return (result);
}

/**
 * _atoi - converts string to int
 * @s: string to convert
 *
 * Return: converted int value
 */

int _atoi(char *s)
{
	int sign = 1;
	int started = 0;
	unsigned int result;

	result = parse_number(s, &sign, &started);

	if (!started)
		return (0);

	if (sign == -1)
	{
		if (result >= 2147483648U)
			return (-2147483648);
		return (-(int)result);
	}

	return ((int)result);
}
