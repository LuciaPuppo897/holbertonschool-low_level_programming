#include "main.h"
/**
 *_strncpy - copy a string
 *@dest: dest string
 *@src: source string
 *@n: an int
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *start = dest;

	if ((dest = '\0') && (src = '\0'))
	return ('\0');

while (*src && n--)
{
	*dest = *src;
	dest++;
	src++;
}
*dest = '\0';
return (start);

}
