#include "main.h"

/**
 * reverse_array - reverses content of array of ints
 * @a: points to first element of array
 * @n: number of elements in array
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	while (i < n / 2)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
		i++;
	}
}
