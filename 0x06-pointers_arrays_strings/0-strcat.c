#include "main.h"
#include<string.h>

/**
 * _strcat - concatenate two strings
 * @dest: destination string
 * @src: source string to be concatenate to dest
 * Return: pointer to the resulting string -pointer to char
 */
char *_strcat(char *dest, char *src)
{
	int dest_len;
	size_t i;

	dest_len = strlen(dest);
	for (i = 0; i <= strlen(src); i++)
	{
		*(dest + dest_len + i) = *(src + i);
	}
	return (dest);
}
