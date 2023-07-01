#include "main.h"
/**
 **rot13 - change to rot 13
 *@rot: char
 *
 *Return: changed alphabet
 */
char *rot13(char *rot)
{	int c = 0;

	for (c = 0; rot[c] != '\0'; c++)
	{
		if (*(rot + c) >= 'a' && *(rot + c) < 'n')
			*(rot + c) += 13;
		else if (*(rot + c) >= 'n' && *(rot + c) <= 'z')
			*(rot + c) -= 13;
	}
return (0);
}
