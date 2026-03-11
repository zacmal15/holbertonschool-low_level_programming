#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by new line
 * @separator: string printed between strings
 * @n: number of strings passed to function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", separator);
	}

	va_end(args);

	printf("\n");
}
