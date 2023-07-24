#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 *list_len - prints the length of the list
 *@h: initial node
 *Return: size of struct
 */
size_t list_len(const list_t *h)
{
	const list_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
	count++;
	current = current->next;
	/** goes to the next node*/
	}

	return (count);
}
