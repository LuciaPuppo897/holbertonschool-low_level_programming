#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 *add_node_end - adds a node at the end of the list
 *@head: a pinter to the first node
 *@str: a pointer
 *Return: 0
 */
list_t *add_node_end(list_t **head, const char *str)
{

list_t *new_node;

if (head == NULL || str == NULL)
	{
	return (NULL);
	}
new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
	free(new_node);
	return (NULL);
	}

new_node->len = strlen(str);
new_node->next = NULL; /** el ultimo */


if (*head == NULL)
	{
	*head = new_node;
	}

	else
	{
		list_t *current = *head;

	while (current != NULL)
	{
		current = current->next;
	}
	current->next = new_node;
	}

return (new_node);
}
