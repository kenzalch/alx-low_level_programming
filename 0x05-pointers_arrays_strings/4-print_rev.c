#include "main.h"
/**
 * print_rev - prints a string in revers followed by a new line
 * @s: string
 * Return: 0
 */
void print_rev(char *s)
{
	int lg;
	int i;

	while (*s != '\0')
	{
		lg++;
		s++;
	}

	s--;

	for (i = lg; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
