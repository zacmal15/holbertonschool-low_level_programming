#include "main.h"

/**
 * helper_sqrt - finds natural sqrt of number
 * @n: number to find square root of
 * @i: current number being tested
 *
 * Return: natural square root or -1 if nonexistent
 */
int helper_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (helper_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - returns natural square root of number
 * @n: number to find square root of
 *
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (helper_sqrt(n, 0));
}
