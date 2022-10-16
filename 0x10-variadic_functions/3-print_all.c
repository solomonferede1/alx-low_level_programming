#include "variadic_functions.h"
#include <string.h>

/**
 * print_all - prints anything
 * @format: list of type of arguments
 */

void print_all(const char * const format, ...)
{
	unsigned int i, len;
	va_list ph;
	char *string;

	len = strlen(format);
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
			case '\0':
				printf("(nil)");
			default:
				break;
		}
		comma(format[i], len, i);
		i++;
	}
	printf("\n");
}

/**
 * comma - prints comma
 * @format1: character to to see if in the allowed format list
 * @len: length of format
 * @i: i
 */
void comma(char format1, unsigned int len, unsigned int i)
{
	unsigned int j, af_len;
	char *af;

	af = "cfis";
	af_len = strlen(af);
	j = 0;
	while (j < af_len)
	{
		if (format1 == af[j] && i < len - 1)
		{
			printf(", ");
			break;
		}
	j++;
	}
}
