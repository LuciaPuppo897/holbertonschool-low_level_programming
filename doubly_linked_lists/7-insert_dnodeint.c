#include <stdlib.h>
#include "lists.h"
/**
 *insert_dnodeint_at_index - add a new node at the head of the list
 *@h: head's pointer
 *@n: new node value
 *idx: position of the new node
 *Return: new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	int i;
dlistint_t *new_node = malloc(sizeof(dlistint_t));
dlistint_t *current = *h;
while (current != NULL)
{
if (i == idx - 1)
	{
new_node->prev = current;
new_node->next = current->next;

	if (current->next != NULL)
	{
	current->next->prev = new_node;
	}

	current->next = new_node;
	return (new_node);
	}
	current = current->next;
	i++;
	}
	free(new_node);
	return (NULL);
}
