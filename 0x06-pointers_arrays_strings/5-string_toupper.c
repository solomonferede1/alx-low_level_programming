#include "main.h"

/**
 * string_toupper - change lower case letters to uppercase
 *
 * @s: string to be changed to uppercase
 *
 * Return: upper case string
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;

	return (s);
}
