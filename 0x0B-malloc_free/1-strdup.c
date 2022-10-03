#include "main.h"
#include<stdlib.h>
#include<string.h>

/**
 * _strdup -  Duplicate a string
 *@str: string to be copied
 * Return:  a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *str_dup;
	int str_len;
	int i;

	str_len = strlen(str);
	if (str == NULL)
		return (NULL);
	str_dup = malloc(sizeof(char) * (str_len + 1));
	if (str_dup == NULL)
		return (NULL);
	for (i = 0; i < str_len; i++)
		str_dup[i] = str[i];
	return (str_dup);
}
