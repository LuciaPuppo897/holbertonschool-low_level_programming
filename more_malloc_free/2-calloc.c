#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocate memory for an array
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *str;
	unsigned int lenght;

	if (nmemb == 0 || size == 0)
	return (NULL);

	lenght = nmemb * size;

    /**Allocate memory using malloc*/
	str = malloc(lenght);

    /**Check if allocation failed*/
	if (str == NULL)
	return (NULL);
    /** look for memset on previus project*/
	memset(str, 0, lenght);

	return (str);
}
