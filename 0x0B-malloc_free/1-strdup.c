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

	if (str == NULL)
		return (NULL);
	str_dup = malloc(sizeof(str));
	if (str_dup == NULL)
		return (NULL);
	strcpy(str_dup, str);
	return (str_dup);
}
