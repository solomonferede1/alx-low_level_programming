#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 *
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *arr;

	if (size == 0 || nmemb == 0)
		return (0);
	arr = malloc(size * nmemb);
	if (arr == NULL)
		return (NULL);
	return (arr);
}

