#include<stdio.h>
/**
 * main - print base 16 numbers
 *
 * Return: 0 on sucess
 */
int main(void)
{
	int number;

	number = 0;
	while (number < 16)
	{
		if (number < 10)
			putchar(number + '0');
		else
			putchar(number % 10 + 'a');
		number++;
	}
	putchar('\n');
	return (0);
}
