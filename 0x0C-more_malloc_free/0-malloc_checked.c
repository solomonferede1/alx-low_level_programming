#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocate memory using malloc
 * @b: size of memory to allocate
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *s = malloc(b);
	if (s == NULL)
		exit(98);
	return (s);
}
