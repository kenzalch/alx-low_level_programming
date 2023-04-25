#include "main.h"
/**
 * print_alphabet - print all alphabet in lowercase
 */
void print_alphabet(void)
{
	int ca;

	for (ca = 97; ca <= 122; ca++)
	{
		_putchar(ca);
	}
	_putchar('\n');
}
