#include "main.h"
/**
 * rev_string - pritn a string in reverse 
 * @s: int
 *
 * Return: void
 *
 */
void rev_string(char *s)
{
	char m;
	char *j;
	char *i;

for (i = s; *i != '\0'; ++i)
;
if (i > s)
--i;

	for (j = s; j < i; ++j, --i)
	{
	m = *j;
	*j = *i;
	*i = m;
	}
}
