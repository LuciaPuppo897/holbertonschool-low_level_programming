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
	char cs[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(',')', '{', '}'};

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
