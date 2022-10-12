#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a function given as a parameter on
 * each element of an array.
 * @array: array
 * @size: size of an array
 * @action: array of pointer to a function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		exit(EXIT_FAILURE);
	for (i = 0; i < size; i++)
		action(array[i]);
}
