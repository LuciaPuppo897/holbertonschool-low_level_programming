#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *str_concat - concatenate 2 string
 *@s1: stringone
 *@s2: string two
 *
 *Return: pointer to conca string
 */
char *str_concat(char *s1, char *s2)
{
	char *p, *q, *rtn;
if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";

rtn = q = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));

	if (rtn == NULL)
		return (NULL);

for (p = 0;  (*q = *p) != '\0'; ++p, ++q)
	;	
   /**concatena en un nuevo punt s1*/
	for (p = s2; (*q = *p) != '\0'; ++p, ++q)
	;

  return (rtn);
}
