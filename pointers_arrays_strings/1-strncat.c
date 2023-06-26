#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenate two strings
 *@dest: destination string
 *@src: origin string
 *Return: always 0
 *
 */
char *_strncat(char *dest, char *src, int n)
{
  int length = 0;
	int i;
	

while (dest[length])
length++;

while (i < 0 && src[i] != '\0')
{
	dest[length++] = src[i++];
}
dest[length] = '\0';
return (dest);

}
