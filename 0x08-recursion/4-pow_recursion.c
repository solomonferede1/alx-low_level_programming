/**
 * _pow_recursion - calculate value of x riased to y
 *
 * @x: Base
 * @y: exponent
 *
 * Return: x power y
 */

#include "main.h"

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
