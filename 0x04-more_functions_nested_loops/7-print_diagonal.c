#include "main.h"
/**
 * print_diagonal - print diagonal line on the terminal
 * @n: Parameter
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		i = 1;
		while (i <= n)
		{
			for (j = 1; j <= i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
