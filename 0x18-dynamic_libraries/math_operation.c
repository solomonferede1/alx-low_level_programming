#include "mat.h"
/**
  * add - add two integers
  * @a: integer one
  * @b: integer two
  * Return: sum of a and b
  */
int add(int a, int b)
{
	return (a + b);
}

/**
  * sub - subtract two integers
  * @a: integer one
  * @b: integer two
  * Return: the difference of a and b
  */
int sub(int a, int b)
{
	return (a - b);
}
/**
  * mul - multiply two integers
  * @a: integer one
  * @b: integer two
  * Return: product of a and b
  */
int mul(int a, int b)
{
	return (a * b);
}

/**
  * div - divide two integers
  * @a: integer one
  * @b: integer two
  * Return: division of a and b
  */
int div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
  * mod - reminder of two integers
  * @a: integer one
  * @b: integer two
  * Return: modulue of a and b
  */
int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
