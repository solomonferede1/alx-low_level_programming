#include "main.h"
/**
 * binary_to_uint - convert binary to unsigned int
 * @b: binary number
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i, n = 0, len;

	if (b == NULL)
		return (0);
	len = strlen(b);
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		if (b[i] == '1')
			n += (1 << i);
	}
	return (n);
}
