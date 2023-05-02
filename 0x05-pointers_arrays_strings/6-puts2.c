#include "main.h"
/**
 * puts2 - print every caracter of a string
 * @str: string
 * Return: 0
 */
void puts2(char *str)
{
	int lg = 0;
	int t = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		lg++;
	}
	t = lg - 1;
	for (o = 0; o <= t; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[o]);
		}
	}
	_putchar('\n');
}
