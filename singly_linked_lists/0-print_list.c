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
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
{
	printf("%s, %u\n", current->str, current->len);
	current = current->next; /** goes to the next node*/
	count++;
}
if (h == NULL)
{	
	printf("[0] (nil)");
}
return (count);
}
