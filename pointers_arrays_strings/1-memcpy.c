#include "main.h"
/**
 *_memcpy - copies memory area
 *@dest : destino
 *@src: source
 *@n: number of bytes
 *Return: always 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int b;

	for (b = 0; b < n; b++)
	{
		dest[b] = src[b];
	}
	return (dest);
}
