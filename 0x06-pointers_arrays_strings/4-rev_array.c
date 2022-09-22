#include "main.h"

/**
 * reverse_array - reverse the content of array of integer
 * @a: array of integer to be reversed
 * @n: size of an array
 */

void reverse_array(int *a, int n)
{
	int tmp;
	int i;

	for (i = 0; i < n / 2 ; i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}

