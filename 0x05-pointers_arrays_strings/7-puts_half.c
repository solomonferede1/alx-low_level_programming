#include "main.h"
#include<string.h>
/**
 * puts_half - prints half of the string
 *
 * @str: string to be printed in half
 */
void puts_half(char *str)
{
	int i;
	int len;

	if (strlen(str) % 2 != 0)
		len = strlen(str) / 2 - 1;
	else
		len = strlen(str) / 2;

	for (i = len; *(str + i) != '\0'; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}

