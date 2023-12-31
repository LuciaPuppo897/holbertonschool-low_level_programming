#include "main.h"
/**
 *_strncpy - copy a string
 *@dest: dest string
 *@src: source string
 *@n: an int
 *Return: always 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;
	int size = 0;

while (src[size])
{
	size++;
}

while (a < n && src[a])
{
	dest[a] = src[a];
	a++;
}
while (a < n)
{
dest[a] = '\0';
a++;
}
return (dest);
}
