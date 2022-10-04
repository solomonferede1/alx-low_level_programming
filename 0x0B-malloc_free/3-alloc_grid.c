#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * alloc_grid - initialize 2d array
 * @width: colomn size
 * @height: row size
 * Return: pointer to 2D array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **a_2d;


	if (width <= 0 || height <= 0)
		return (NULL);
	a_2d = malloc(sizeof(int) * width * height);

	if (a_2d == NULL)
		return (NULL);

	for (i = 0; i < height - 1; i++)
		for (j = 0; j < width - 1; j++)
			*( *(a_2d + i) + j) = 0;
	return (a_2d);
}
