#include <stdio.h>
/**
 * main Entry point
 *
 * Return: always 0 (success)
 *
 */
int main(void)
{
	char alphabet;
	char ALPHABET;

	for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
	{
		putchar(alphabet);
	}
	for (ALPHABET = 'A'; ALPHABET <= 'Z' ; ALPHABET++)
	{
		putchar(ALPHABET);
	}

	putchar('\n');
	return (0);
}
