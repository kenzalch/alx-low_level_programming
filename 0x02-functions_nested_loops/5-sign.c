#include "main.h"
/**
 * print_sign - check the sign of numbers
 * @n: the checked number
 * Return: 1 if more than zero, return 0 if zero, return -1 if less than zero
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
	_putchar('\n');
}
