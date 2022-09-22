#include "main.h"

/**
 * leet - encode string in to 1337
 *
 * @s: string to be encoded
 *
 * Return: Encoded string
 */

char *leet(char *s)
{
	int i, j;
	char rep_str[] = {'a', 'e', '0', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	char rep_num[] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == rep_str[j] || s[i] == rep_str[j + 5])
				s[i] = rep_num[j];
		}
	}

	return (s);
}
