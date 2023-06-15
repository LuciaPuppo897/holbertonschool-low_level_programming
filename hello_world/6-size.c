#include <stdio.h>
/**
 *
 * main = Entry point
 *
 * Return= always 0 (success)
 *
 */
int main(void)
{
	int intType;
	float floatType;
	double doubleType;
	char charType;

	/**sizeof evaluates the size of a variable*/
	printf("size of int: %zu bytes\n", sizeof(intType));
	printf("size of float: %zu bytes\n", sizeof(floatType));
	printf("size of double: %zu bytes\n", sizeof(doubleType));
	printf("size of char: %zu bytes\n", sizeof(charType));

	return (0);
}
