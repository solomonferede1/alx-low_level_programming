#include "search_algos.h"
#include <math.h>
#define min(x, y) (((x) < (y)) ? (x) : (y))

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @value: the value to search for
 * @size: Size of the array
 * Return: ndex where value is located, -1 if value not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right, middle;

	left = size / 2;
	right = size - 1;
	while (left <= right)
	{
		middle = floor((left + right) / 2);
		printf("Searching in array: %d", array[left]);
		for (i = left + 1; i <= right; i++)
		{
			printf(", %d", array[i]);
		}
		printf("\n");
		if (array[middle] < value)
			left = middle + 1;
		else
			if (array[middle] > value)
				right = middle - 1;
			else
				return (middle);
	}
	return (-1);
}

/**
 * exponential_search- searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @value: the value to search for
 * @size: Size of the array
 * Return: index where value is located, -1 if value not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t r_bound;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
	{
		printf("Value checked array[0] = [%d]\n", array[0]);
		return (0);
	}
	r_bound = 1;

	while (r_bound < size && array[r_bound] < value)
	{
		r_bound *= 2;
		printf("Value checked array[%lu] = [%d]\n", r_bound / 2, array[r_bound / 2]);
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
		r_bound / 2, min(size - 1, r_bound));
	return (binary_search(array, min(r_bound + 1, size), value));
}
