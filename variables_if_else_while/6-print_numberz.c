#include <stdio.h>
/**
 * main - print base 10 without tye char
 *
 * Return: always 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		putchar('0' + n);

	putchar('\n');

	return (0);
}
