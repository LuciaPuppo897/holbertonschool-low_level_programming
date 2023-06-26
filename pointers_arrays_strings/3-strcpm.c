#include "main.h"
/**
 * _strcmp - compare two string
 *@s1: string 1
 *@s2: string 2
 *Return: always 0
 *
 */
int _strcmp(char *s1, char *s2)
{
	int size = 0;
while (s1[size])
{
	size++;
}
while (s2[size])
{
	size++;
}
if (s1 == s2)
{
return (0);
}
else if (s1 > s2)
{
return (-1);
}
else
{
return (1);
}

}
