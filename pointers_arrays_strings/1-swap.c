#include "main.h"
/**
 *swap_int - swap two values
 *@*a: pointer one
 *@*b: pointer two
 *
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
  int c;
	c = *a;  
	*a = *b;
	*b = c;
}
