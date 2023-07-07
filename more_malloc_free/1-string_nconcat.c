#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *string_nconcat - concatenate 2 string
 *@s1: stringone
 *@s2: string two
 *@n: int
 *Return: pointer to conca string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1, size2, length;
	char *rtn;
if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";

size1 = strlen(s1);
size2 = strlen(s2);

if (n >= size2)
	length = size1 + size2;
else
	length = size1 + n;

rtn  = malloc(sizeof(char) * (length + 1));

	if (rtn == NULL)
		return (NULL);


strcpy(rtn, s1);

strncat(rtn, s2, n);

	return (rtn);
}
