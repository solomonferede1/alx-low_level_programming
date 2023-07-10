#include "search_algos.h"
#include <math.h>

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

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;
	while (left <= right)
	{
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
}
