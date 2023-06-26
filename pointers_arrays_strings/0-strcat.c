#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenate two strings
 *@dest: destination string
 *@src: origin string
 *Return: always 0
 *
 */
char *_strcat(char *dest, char *src)
{
	int length;
	int i;

while (dest[length])
length++;

for (i = 0; src[i] != 0; i++)
{
	dest[length] = src[i];
	length++;
}
dest[length] = '\0';
return (dest);

}
