#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Return: pointer to array, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc(size);
	if (size == 0 || p == NULL)
		return (NULL);

	i = 0;

	while (i < size)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
