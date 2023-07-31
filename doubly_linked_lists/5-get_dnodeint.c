#include "lists.h"
#include <stdlib.h>
/**
 * get_dnodeint_at_index - returns the nth node of a double linked list
 * @head: the first node
 * @index: the index of the node to get
 * Return: the nth node of the list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL && i < index)
	{
		head = head->next;
		i++;
	}
	if (i == index)
		return (head);
	else
		return (NULL);
}
