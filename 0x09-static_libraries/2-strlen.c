#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: the lenght of string
 * Return: lenght
 */
int _strlen(char *s)
{
	int lg = 0;

	while (*s != '\0')
	{
		lg++;
		s++;
	}
	return (lg);
}
