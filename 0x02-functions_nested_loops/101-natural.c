#include<stdio.h>
/**
 * main - sum multiple of 3 or 5
 * Return: 0(always)
 */
int main(void)
{
	int number;
	int sum = 0;

	for (number = 3; number < 1024; number++)
	{
		if (number % 3 == 0 || number % 5 == 0)
			sum += number;
	}
	printf("%d\n", sum);
	return (0);
}
