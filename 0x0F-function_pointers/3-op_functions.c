#include "function_pointers.h"

/**
  * op_add - add two integers
  * @a: integer one
  * @b: integer two
  * Return: sum of a and b
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - subtract two integers
  * @a: integer one
  * @b: integer two
  * Return: the difference of a and b
  */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
  * op_mul - multiply two integers
  * @a: integer one
  * @b: integer two
  * Return: product of a and b
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - divide two integers
  * @a: integer one
  * @b: integer two
  * Return: division of a and b
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
  * op_mod - reminder of two integers
  * @a: integer one
  * @b: integer two
  * Return: modulue of a and b
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
