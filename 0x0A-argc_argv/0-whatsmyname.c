/**
 * main - print name of the program
 *
 * @argc: number of arguments to main
 * @argv: arguments of main
 *
 * Return: always 0
 */

#include<stdio.h>

int main (int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
