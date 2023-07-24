#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 *print_list - prints the list
 *@h: initial node
 *Return: size of struct
 */
size_t print_list(const list_t *h)
{
	int i;

	for (i = 0; h; i++)
{
	if (h->str != NULL)
	{
	printf("[%u] %s\n", h->len, h->str);
	h = h->next;	/** goes to the next node*/
	}
	else
		printf("[0], nil\n");

	i++;
}
return (i);
}
