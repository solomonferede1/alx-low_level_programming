/**
 * _memcpy - copies memory area
 *
 * @dest: dest memory location to be pasted
 * @src: source memory location to be copied
 * @n: memory size
 *
 * Return: pointer to dest
 */

#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
