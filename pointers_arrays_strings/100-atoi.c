#include "main.h"

/**
 * _atoi - converts string to int
 * @s: string to convert
 *
 * Return: int value found in string, or 0 if none
 */
int _atoi(char *s)
{
	int i;
	int sign;
	unsigned int num;
	int started;

	i = 0;
	sign = 1;
	num = 0;
	started = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			started = 1;
			num = (num * 10) + (s[i] - '0');
		}
		else if (started)
		{
			break;
		}

		i++;
	}

	if (sign < 0)
		return (-num);

	return (num);
}
