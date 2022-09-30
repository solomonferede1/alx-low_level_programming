/**
 * main - print name of the program
 *
 * @argc: number of arguments to main
 * @argv: arguments of main
 *
 * Return: always 0
 */

#include<stdio.h>

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc);
	return (0);
}
