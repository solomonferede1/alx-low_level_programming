#include "main.h"
#include<stdio.h>
/**
 * print_times_table - print n times table
 * @n: an integer to find table
 */
void print_times_table(int n)
{
	int i;
	int j;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				printf("%d", i * j);
				if (j != n)
				{
					if (i * (j + 1) < 10)
						printf(",   ");
					else if (i * (j + 1) < 100)
						printf(",  ");
					else
						printf(", ");
				}
			}
			printf("\n");
		}
	}
}
