#include "3-calc.h"
/**
* main - main
* @argc: int
* @argv: char
* Return: 0
*/
int main(int argc, char *argv[])
{
  int func;
  int a, b;

  if (argc != 4)
    {
    printf("%s\n", "Error");
    exit (98);
    }
if (get_op_func(argv[2] == NULL)
	{
	printf("%s\n", Error);
	exit (99);
	}

	a = atoi (argv[2]);
	b = atoi (argv[3]);
	func = get_op_func(argv[2])(a, b);

	printf("%d\n", func);

	return (0);
} 
