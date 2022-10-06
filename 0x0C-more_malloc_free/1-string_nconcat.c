#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenate two strings
 *
 * @s1: string 1
 * @s2: strin 2
 * @n: concatenate string size
 *
 * Return: pointer to newly concatenate string
 *         NULL if fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_s;
	unsigned int i, j;

	if (n <= strlen(s2))
		new_s = malloc(n + sizeof(*s1));
	else
		new_s = malloc(sizeof(*s2) + sizeof(*s1) - 1);
	if (new_s == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		new_s[i] = s1[i];
	for (j = 0; j < n && s2[j] != '\0'; j++)
		new_s[i + j] = s2[j];
	new_s[i + j] = '\0';

	return (new_s);
}
