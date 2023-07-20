#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *t;
	dlistint_t *nw;

	nw = malloc(sizeof(dlistint_t));
	if (nw == NULL)
		return (NULL);

	nw->n = n;
	nw->next = NULL;

	t = *head;

	if (t != NULL)
	{
		while (t->next != NULL)
			t = t->next;
		t->next = nw;
	}
	else
	{
		*head = nw;
	}

	nw->prev = t;

	return (nw);
}
