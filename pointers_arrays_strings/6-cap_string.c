#include "main.h"

/**
 * cap_string - capitalise all words of string
 * @str: string to modify
 *
 * Return: pointer to str
 */
char *cap_string(char *str)
{
	int i = 0;
	int j;
	char separators[] = " /t/n,;.!?\"(){}";

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{

			if (i == 0)
				str[i] = str[i] - 32;
			else
			{

				for (j = 0; separators[j] != '\0'; j++)
				{
					if (str[i - 1] == separators[j])
					{
						str[i] = str[i] - 32;
						break;
					}
				}
			}
		}

		i++;
	}

	return (str);
}
