#include "main.h"
/**
 *_memcpy - copies memory area
 *@dest : destino
 *@src: source
 *@n: number of bytes
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{ 
	unsigned int a;

	for (int a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
