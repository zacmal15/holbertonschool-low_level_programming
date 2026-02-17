#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: holds value for one int
 * @b: holds value for second int
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
