#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: num nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t l = 0;

	while (h)
	{
		printf("%d\n", h->n);
		l++;
		h = h->next;
	}

	return (l);
}
