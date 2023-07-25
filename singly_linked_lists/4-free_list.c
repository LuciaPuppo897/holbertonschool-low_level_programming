#include <stdlib.h>
#include "lists.h"
/**
 *free_list - free memory
 *@head: the first node
 *Return: nothing
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next;

while (current != NULL)
	{
	next = current->next;
	free(next->str);
	free(next);
	current = next;
	}
}
