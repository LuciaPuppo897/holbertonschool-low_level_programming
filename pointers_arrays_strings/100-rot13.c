#include "main.h"
/**
 **rot13 - change to rot 13
 *@rot: char
 *
 *Return: changed alphabet
 */
char *rot13(char *rot)
{	int c = 0;
while (rot[c])
	{
	while ((rot[c] >= 'a' && rot[c] <= 'z') || (rot[c] >= 'A' && rot[c] <= 'Z'))
	{
		if ((rot[c] > 'm' && rot[c] <= 'z') || (rot[c] > 'M' && rot[c] <= 'Z'))
		{
		rot[c] -= 13;
		break;
		}
	rot[c] += 13;
	break;
	}
c++;
}
return (rot);
}

