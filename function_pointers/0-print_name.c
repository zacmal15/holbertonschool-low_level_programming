#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - prints a name using a function
 * @name: pointer to name string
 * @f: pointer to function that prints name
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
