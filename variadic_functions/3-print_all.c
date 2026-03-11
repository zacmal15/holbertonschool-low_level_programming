#include "variadic_functions.h"

/**
 * print_char - prints char
 * @args: list of arguments
 * @separator: string printed before value
 */
void print_char(va_list args, char *separator)
{
	printf("%s%c", separator, va_arg(args, int));
}

/**
 * print_int - prints int
 * @args: lists args
 * @separator: prints string before value
 */
void print_int(va_list args, char *separator)
{
	printf("%s%d", separator, va_arg(args, int));
}

/**
 * print_float - prints float
 * @args: lists arguments
 * @separator: string printed before value
 */
void print_float(va_list args, char *separator)
{
	printf("%s%f", separator, va_arg(args, double));
}

/**
 * print_string - prints string
 * @args: lists args
 * @separator: string printed before value
 */
void print_string(va_list args, char *separator)
{
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s%s", separator, str);
}

/**
 * print_all - prints anything
 * @format: lists type of args passed to function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	printer_t types[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};
	int i;
	int j;
	char *separator;

	va_start(args, format);
	i = 0;
	separator = "";
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (types[j].symbol != '\0')
		{
			if (format[i] == types[j].symbol)
			{
				types[j].f(args, separator);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
