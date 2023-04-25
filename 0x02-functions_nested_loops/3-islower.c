#include "main.h"
/**
 * _islower - check if the caracter is lowercase
 * @c: is thge char to be checked
 * Return: 1 if char is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
