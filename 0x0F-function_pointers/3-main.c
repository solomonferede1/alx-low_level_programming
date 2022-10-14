#include "function_pointers.h"
/**
  * main - main
  * @argc: number of arguments to main
  * @argv: array of argunments
  * Return: 0 on success
  */

int main(int argc, char **argv)
{
	int result;
	int (*funn)(int, int);
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (strlen(argv[2]) != 1)
	{
		printf("Error\n");
		exit(99);
	}

	funn = get_op_func(argv[2]);
	if (funn == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	result = funn(num1, num2);
	printf("%d\n", result);
	return (0);
}
