/**
 * _print_rev_recursion - print string in reverse using recursion
 *
 * @s: string to be printed
 */

#include "main.h"

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
