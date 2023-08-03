#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - copies the content of a file to another file
* @argc: num argument
* @argv: string argument
* Return: 0
*/

int main(int argc, char *argv[])
{
	int file_to, file_from;
	char buffer[1024];
	ssize_t byrd, bywr;

	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
	}
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	close(file_from), exit(99);
	}
	byrd = read(file_from, buffer, 1024);
	if (byrd == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
	}
	bywr = write(file_to, buffer, byrd);
	if (bywr < byrd)
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	if (close(file_from) == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);
	}
	if (close(file_to) == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);
	}
	return (0);
}
