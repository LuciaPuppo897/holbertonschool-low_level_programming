#include <stdlib.h>
#include "lists.h"
/**
 *free_list - free memory
 *@head: teh first node
 *Return: nothing
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *temp = current;

while (current != NULL)
	{
	current = current->next;
	free(temp->str);
	free(temp);
	}
}
