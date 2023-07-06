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
	int i = 0;
	char *rtn;
if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";

rtn  = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));

	if (rtn == NULL)
		return (NULL);

while (*s1 != '\0')
{
	rtn[i] = *s1; /** concateno el primero*/
	s1++;
	i++;

}
while (*s2 != '\0') /**concateno el segundo*/
{
	rtn[i] = *s2;
	s2++;
	i++;
}

  return (rtn);
}
