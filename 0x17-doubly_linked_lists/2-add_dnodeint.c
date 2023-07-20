#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nw;
	dlistint_t *t;

	nw = malloc(sizeof(dlistint_t));
	if (nw == NULL)
		return (NULL);

	nw->n = n;
	nw->prev = NULL;
	t = *head;

	if (t != NULL)
	{
		while (t->prev != NULL)
			t = t->prev;
	}

	nw->next = t;

	if (t != NULL)
		t->prev = nw;

	*head = nw;

	return (nw);
}
