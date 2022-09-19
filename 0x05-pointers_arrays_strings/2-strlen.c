#include "main.h"
/**
 * _strlen - compute the length of the string
 * @s: pointer to int
 * Return: string length
 */
int _strlen(char *s)
{
	int str_len;

	str_len = 0;
	while (*s != '\0')
	{
		str_len++;
		s++;
	}
	return (str_len);
}
