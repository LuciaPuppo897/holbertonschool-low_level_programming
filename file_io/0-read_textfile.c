#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *read_textfile - reads a text file and print it on the POSIX
 *@filename: the file to read
 *@letters: the amount of letter it should read and print
 *Return: teh amout of letters or error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *text;
	ssize_t btrd, btwr, file; /**bytesread and byteswritten*/

text = malloc(letters);
if (text == NULL)
{
	return (0);
}
if (filename == NULL)
{
	return (0);
}
file = open(filename,	O_RDONLY);
if (file == -1)
{
	free(text);
	return (0);
}
btrd = read(file, text, letters);

btwr = write(STDOUT_FILENO, text, btrd);

close(file);

return (btwr);
}
