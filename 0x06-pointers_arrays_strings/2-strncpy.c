#include "main.h"
#include<string.h>
/**
 * _strncpy - copies a string
 * @dest: destination pointer to char
 * @src: source pointer to dtring to be copied
 * @n: number of character to be copied
 * Return: pointer of the destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
