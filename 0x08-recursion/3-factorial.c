/**
 * factorial - compute factorial of a number
 *
 * @n: integer number in which the factorial is to be calculated
 *
 * Return: factorian of n
 */

#include "main.h"

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
