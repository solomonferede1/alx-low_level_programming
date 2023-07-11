#include "search_algos.h"
#include <math.h>
#define min(x, y) (((x) < (y)) ? (x) : (y))
/**
  * jump_search - searches for a value in an array of integers u
  * @array: the array where the element is searching
  * @size: size of the array
  * @value: is the value to search for
  * Return: index of first found, -1 if not found
  */
int jump_search(int *array, size_t size, int value)
{
	size_t left, right, step;

	if (array == NULL)
		return (-1);

	left = 0;
	step = sqrt(size);
	right = 0;

	while (array[min(right, size)] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", right, array[right]);
		left = right;
		right = left + step;
		if (left > size)
			return (-1);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", left, right);

	while (array[left] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", left, array[left]);
		left += 1;
		if (left == min(right, size))
			return (-1);
	}

	if (array[left] == value)
	{
		printf("Value checked array[%lu] = [%d]\n", left, array[left]);
		return (left);
	}
	else
		return (-1);
}
