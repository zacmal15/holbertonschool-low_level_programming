#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>

/**
 * struct printer - matches format symbol to print function
 * @symbol: format character
 * @f: function pointer for printing
 */
typedef struct printer
{
	char symbol;
	void (*f)(va_list, char *);
} printer_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list args, char *separator);
void print_int(va_list args, char *separator);
void print_float(va_list args, char *separator);
void print_string(va_list args, char *separator);

#endif
