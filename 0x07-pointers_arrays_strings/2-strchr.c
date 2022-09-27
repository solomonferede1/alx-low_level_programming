/**
 * _strchr - locates a character in string
 *
 * @s: string
 * @c: character to be checked for the occurance
 *
 * Return: pointer to first occurance of the character
 */

#include "main.h"
#include<string.h>

char *_strchr(char *s, char c)
{
	size_t i;

	for (i = 0; i <= strlen(s); i++)
	{
		if (s[i] == c)
		{
			s = &s[i];
			break;
		}
	}
	if (i > strlen(s))
		s = NULL;

	return (s);
}
