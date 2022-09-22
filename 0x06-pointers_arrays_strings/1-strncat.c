#include "main.h"
#include<string.h>

/**
 * _strncat - concatenate two strings
 * @dest: destination string
 * @src: source string to be concatante
 * @n: maximum number of characters to be concatenate
 * Return: pointer to dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int dest_len;

	dest_len = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
