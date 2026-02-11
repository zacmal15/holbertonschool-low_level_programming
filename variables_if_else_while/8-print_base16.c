#include <stdio.h>
/**
 * main - print base16
 *
 * Return: always 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar('0' + n);

	for (n = 0; n < 6; n++)
		putchar('a' + n);

	putchar('\n');

	return (0);
}
