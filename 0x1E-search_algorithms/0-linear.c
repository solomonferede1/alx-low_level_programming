#include "search_algos.h"

/**
  * linear_search -  searches for a value in an array of integers u
  * @array: the array where the element is searching
  * @size: size of the array
  * @value: is the value to search for
  * Return: index of first found, -1 if not found
  */

int linear_search(int *array, size_t size, int value)
{
        size_t i;

        if (array == NULL)
                return (-1);

        for (i = 0; i < size; i++)
        {
                printf("Value checked array[%ld] = [%d]\n", i, array[i]);
                if (array[i] == value)
                        return (i);
        }
        return (-1);
}