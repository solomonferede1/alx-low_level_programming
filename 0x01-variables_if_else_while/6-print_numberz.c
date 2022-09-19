#include<stdio.h>
/**
 * main - print single digit numbers
 *
 * Return: 0 on success
 */
int main(void)
{
	int number;

	number = 48;
	while (number <= 57)
	{
		putchar(number);
		number++;
	}
	putchar('\n');
	return (0);
}
