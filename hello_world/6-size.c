#include <stdio.h>
/**
 * main = Entry point
 *
 * Return= always 0 (success)
 *
 */
int main(void)
{
	int i;
	float f;
	long int a;
	char c;
        long long int b;
	/**sizeof evaluates the size of a variable*/
printf("size of a char: %lu byte(s)\n", sizeof(c));
printf("size of an int: %lu byte(s)\n", sizeof(i));
printf("size of a long int: %lu byte(s)\n", sizeof(a));
printf("size of  a float: %lu byte(s)\n", sizeof(f));
printf("size of a long long int: %lu byte(s)\n", sizeof(b));

return (0);
}
