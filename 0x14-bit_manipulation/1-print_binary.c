#include "main.h"

/**
 * print_binary - prints the binary equivalent of a number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i, c = 0;
	unsigned long int v;

	for (i = 63; i >= 0; i--)
	{
		v = n >> i;

		if (v & 1)
		{
			_putchar('1');
			c++;
		}
		else if (c)
			_putchar('0');
	}
	if (!c)
		_putchar('0');
}
