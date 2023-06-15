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
	long int longinttype;
	char charType;
        long long int; longlonginttype
	/**sizeof evaluates the size of a variable*/
	printf("size of a char: %lu bytes\n",(unsigned long) sizeof(charType));
	printf("size of an int: %lu byte(s)\n",(unsigned long)sizeof(intType));
	printf("size of a long int: %lu bytes\n",(unsigned long)sizeof(longintType));
        printf("size of float: %lu byte(s)\n",(unsigned long)sizeof(floatType));
        printf("size of a long long int: %lu bytes\n",(unsigned long)sizeof(longlonginttype));
        return (0);
}
