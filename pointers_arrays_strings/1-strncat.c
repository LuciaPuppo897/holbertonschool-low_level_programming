#include "main.h"
#include <stdio.h>
/**
 * _strncat - concatenate two strings with n length
 *@dest: destination string
 *@src: origin string
 *@n : int
 *Return: always 0
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int length = 0;
	int i = 0;
	size_t s = i;

while (dest[length])
length++;

while (i < n && src[i] != '\0')
{
	dest[length++] = src[i++];
}
dest[length] = '\0';
return (dest);

}
