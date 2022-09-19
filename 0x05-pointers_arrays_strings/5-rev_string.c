#include "main.h"
#include<string.h>
/**
 * rev_string - revese the string
 * @s: pointer to char
 */
void rev_string(char *s)
{
	char *tmp;
	int i;
	int j;

	tmp = s;
	for (i = strlen(s) - 1, j = 0; i >= 0; i--, j++)
	{
		*(tmp + j) = *(s + i);
	}
	s = tmp;
}
