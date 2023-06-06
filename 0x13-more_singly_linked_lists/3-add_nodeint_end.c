#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a ll
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nv;
	listint_t *tp = *head;

	nv = malloc(sizeof(listint_t));
	if (!nv)
		return (NULL);

	nv->n = n;
	nv->next = NULL;

	if (*head == NULL)
	{
		*head = nv;
		return (nv);
	}

	while (tp->next)
		tp = tp->next;

	tp->next = nv;

	return (nv);
}
