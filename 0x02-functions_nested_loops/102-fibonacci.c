#include<stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	long int priviousSeries = 1;
	long int currentSeries = 1;
	long int nextSeries;

	for (i = 0; i < 50; i++)
	{
		printf("%ld", currentSeries);
		if (i !=  49)
			printf(", ");
		nextSeries = priviousSeries + currentSeries;
		priviousSeries = currentSeries;
		currentSeries = nextSeries;
	}
	printf("\n");
	return (0);
}



