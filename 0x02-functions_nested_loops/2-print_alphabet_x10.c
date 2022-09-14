#include "main.h"
/**
 * print_alphabet_x10 - function that prints 10 times the alphabet, in lowercas
 */
void print_alphabet_x10(void)
{
	char ch = 'a';
	int i = 0;

	while (i < 10)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		ch = 'a';
		_putchar('\n');
		i++;
	}
}



