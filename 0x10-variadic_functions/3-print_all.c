#include "variadic_functions.h"
#include <string.h>

/**
 * print_all - prints anything
 * @format: list of type of arguments
 */

void print_all(const char * const format, ...)
{
	unsigned int i, j;
	va_list ph;
	unsigned int len, af_len;
	char *string;
	char *af;

	af = "cifs";
	len = strlen(format);
	af_len = strlen(af);
	va_start(ph, format);

	i = 0;
	while (i < len && format != NULL)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ph, int));
				break;
			case 'i':
				printf("%i", va_arg(ph, int));
				break;
			case 'f':
				printf("%f", va_arg(ph, double));
				break;
			case 's':
			{
				string = va_arg(ph, char *);
				if (string == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", string);
			}
				break;
			default:
				break;
		}
		j = 0;
		while (j < af_len)
		{
			if (format[i] == af[j] && i < len - 1)
			{
				printf(", ");
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
}
