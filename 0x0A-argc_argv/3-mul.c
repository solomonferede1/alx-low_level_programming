/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
#include<stdio.h>
#include "main.h"

int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}

/**
 * main - multiplies two numbers
 * @argc: number of parameter
 * @argv: array of arguments
 *
 * Return: 0 if sucess, 1 if not
 */

int main(int argc, char **argv)
{
	char *er;
	int i;
	int num1, num2;

	er = "error";
	if (argc == 3)
	{
		num1 = _atoi(argv[1]);
		num2 = _atoi(argv[2]);
		return (num1 * num2);
	}
	else
	{
		for (i = 0; er[i] != '\0'; i++)
			_putchar(er[i]);
		_putchar('\n');
		return (1);
	}
}
