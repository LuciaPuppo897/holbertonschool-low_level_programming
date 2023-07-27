#include "lists.h"
/**
 *sum_dlistint - sums all the data in the list
 *@head: header's pointer in the current list
 *Return: the result of add
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

while (current != NULL)
	{
	sum += current->n;
	current = current->next;
	}
return (sum);
}
