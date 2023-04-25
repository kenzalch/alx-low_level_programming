#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 */
void print_alphabet_x10(void)
{
	int ca;
	int i;

	i = 0;

	while (i < 10)
	{
		for (ca = 97; ca <= 122; ca++)
		{
			_putchar(ca);
		}
		_putchar('\n');
		i++;
	}
}
