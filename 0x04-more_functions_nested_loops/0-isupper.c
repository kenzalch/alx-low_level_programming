#include "main.h"
/**
 * _isupper - check if the letter is uppercase
 * @c: the checker caracter
 * Return: 1 if yes and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
