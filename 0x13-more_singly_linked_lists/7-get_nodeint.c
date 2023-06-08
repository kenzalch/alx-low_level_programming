#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a ll
 * @head: first node in the ll
 * @index: index of the node to return
 *
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *tp = head;

	while (tp && j < index)
	{
		tp = tp->next;
		j++;
	}

	return (tp ? tp : NULL);
}