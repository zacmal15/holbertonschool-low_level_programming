#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - executes function on each element of array
 * @array: pointer to array
 * @size: number of elements in array
 * @action: pointer to function to be applied to each element
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
