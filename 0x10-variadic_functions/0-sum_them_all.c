#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum of all its parameters.
 * @n: frist parametrs
 * Return: sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ph;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);
	sum = 0;
	va_start(ph, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ph, int);
	return (sum);
}
