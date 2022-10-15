#include "variadic_functions.h"
/**
 * print_strings - print strings followed by a new line
 * @separator: separator
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ph;
	char *string;

	if (n == 0)
		return;
	va_start(ph, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(ph, char*);
		if (string == NULL)
			printf("nil");
		else
			printf("%s", string);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
}

