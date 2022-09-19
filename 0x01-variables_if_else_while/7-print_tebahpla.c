#include<stdio.h>
/**
 * main - print lowercase letters in reverse order
 *
 * Return: 0 on sucess
 */
int main(void)
{
	int letter;

	letter = 122;
	while (letter >= 97)
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
