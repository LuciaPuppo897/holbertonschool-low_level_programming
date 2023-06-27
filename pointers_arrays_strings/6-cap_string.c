#include "main.h"
/**
 *cap_string - capitalize the words of a string
 *@p : the string
 * Return: a pointer
 */
char *cap_string(char *p)
{
	int i= 0, k;
	int j = 13;
	char cs[] = {32, '\n', '\t', 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

while (p[i])
{
	k = 0;


		while (k < j)
		{
			if ((i == 0 || p[i - 1] == cs[i]) && (p[i] >= 97 && p[i] <= 122))
				p[i] = p[i] - 32;

			i++;
		}
			k++;
}

	return (p);
}
