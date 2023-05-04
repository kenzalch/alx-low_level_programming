#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int z;
	int m;

	z = 0;
	while (dest[z] != '\0')
	{
		z++;
	}
	m = 0;
	while (m < n && src[m] != '\0')
	{
	dest[z] = src[m];
	z++;
	m++;
	}
	dest[z] = '\0';
	return (dest);
}
