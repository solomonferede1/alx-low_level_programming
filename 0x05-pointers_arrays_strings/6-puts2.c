#include "main.h"
#include<string.h>
/**
 * puts2 - prints every other character of a string
 *
 * @str: pointer to char
 */
void puts2(char *str)
{
	size_t i;

	for (i = 0; i < strlen(str); i = i + 2)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
