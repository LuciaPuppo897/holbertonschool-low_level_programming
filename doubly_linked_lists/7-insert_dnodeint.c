#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: the head of the list
 * @idx: the position to insert
 * @n: data for the new node
 * Return: The new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL, *current;
	unsigned int i = 0;

	current = *h;

	if (h == NULL || (curr == NULL && idx != 0))
	return (NULL);

	if (idx == 0)
	return (add_dnodeint(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	return (NULL);
	new->n = n;
	while (current != NULL)
	{
	if (idx == i)
	{
	new->prev = current->prev;
	new->next = current;
	(current->prev)->next = new;
	current->prev = new;
	return (new);
	}
	if ((idx - 1) == i && current->next == NULL)
	{
	return (add_dnodeint_end(h, n));
	}
	current = current->next;
	i++;
	}
	free(new);
	return (NULL);
}
