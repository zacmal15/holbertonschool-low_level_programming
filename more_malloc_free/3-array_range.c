#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates array of integers
 * @min: min value
 * @max: max value
 *
 * Return: pointer to newly created array, otherwise NULL
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;
	unsigned int size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < (int)size; i++)
		arr[i] = min + i;

	return (arr);
}
