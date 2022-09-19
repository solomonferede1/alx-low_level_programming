#include "main.h"
#include<string.h>
/**
 * rev_string - revese the string
 * @s: pointer to char
 */
void rev_string(char *s)
{
	char *reversed;
	int i;
	int j;

	reversed = s;
	for (i = strlen(s) - 1, j = 0; i >= 0; i--, j++)
	{
		*(s + j) = *(reversed + i);
	}
}
