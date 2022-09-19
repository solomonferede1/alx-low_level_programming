#include<stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: 0 on suxess
 *
 */
int main(void)
{
	int number;

	number = 0;
	while (number <= 9)
	{
		putchar(number + '0');

		if (number != 9)
		{
			putchar(',');
			putchar(' ');
		}
		number++;
	}
	putchar('\n');
	return (0);
}
