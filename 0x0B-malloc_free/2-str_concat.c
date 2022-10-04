#include "main.h"
#include<string.h>
#include<stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concatenate string
 */

char *str_concat(char *s1, char *s2)
{
	char *s1_s2;
	int i;
	int len;
	int len1, len2;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	len1 = strlen(s1);
	len2 = strlen(s2);
	len = len1 + len2;

	s1_s2 = malloc(sizeof(char) * (len + 1));

	if (s1_s2 == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		s1_s2[i] = s1[i];
	for (i = 0; s2[i]; i++)
		s1_s2[i + len1] = s2[i];
	return (s1_s2);
}
