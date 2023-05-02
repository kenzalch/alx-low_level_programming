#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @b: int 1
 * @a: int 2
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
