#include "3-calc.h"
/**
 * op_add - add two numbers
 *@a: first num
 *@b: second num
 *Return: int
 */
int op_add(int a, int b)
{
int result;
result = (a + b);
return (result);
}

/**
 * op_sub - sub two numbers
 *@a: first num
 *@b: second num
 *Return: int
 */
int op_sub(int a, int b)
{
	int result;

result = (a - b);
return (result);
}

/**
 * op_mul - multiplies two numbers
 *@a: first num
 *@b: second num
 *Return: int
 */
int op_mul(int a, int b)
{
	int result;

result = (a * b);
return (result);
}

/**
 * op_div - div two numbers
 *@a: first num
 *@b: second num
 *Return: int
 */
int op_div(int a, int b)
{
	int result;

if (b == 0)
{
	printf("Error\n");
		exit(100);
}
result = (a / b);
return (result);
}

/**
 * op_mod - the reminder of / two numbers
 *@a: first num
 *@b: second num
 *Return: int
 */
int op_mod(int a, int b)
{
	int result;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
result = (a % b);
return (result);
}
