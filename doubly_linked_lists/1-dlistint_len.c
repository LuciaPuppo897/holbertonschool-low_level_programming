#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - length of dlistint elmetns
 * @h: head's pointer
 *
 * Return: number of noder
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
	node_count++;
	h = h->next;
	}

	return (node_count);
}
