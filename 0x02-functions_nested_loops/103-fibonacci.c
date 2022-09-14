#include<stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int priviousSeries = 1;
	long int currentSeries = 1;
	long int nextSeries;
	long int sum = 0;

	while (currentSeries < 4000000)
	{
		if (currentSeries % 2 == 0)
			sum += currentSeries;
		nextSeries = priviousSeries + currentSeries;
		priviousSeries = currentSeries;
		currentSeries = nextSeries;
	}
	printf("%ld\n", sum);
	return (0);
}



