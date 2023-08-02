#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *create_file - creates a file
 *@filename: the name of the fiel to be crated
 *@text_content: a string to write on the file
 *Return: 1 if success or -1 if fails
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int i = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}
while (text_content[i] != '\0')
{
	i++;
}

file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (file == -1)
{
	return (-1);

}

write(file, text_content, i);
return (1);
}
