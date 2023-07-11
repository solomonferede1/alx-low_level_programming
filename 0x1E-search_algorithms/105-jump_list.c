#include "search_algos.h"
#include <math.h>
/**
 * jump_list - Searchs for a value in sorted singly linked list
 * @list: A pointer to the head of the list
 * @value: the value to search for
 * @size: the number of nodes
 * Return: Pointer to the first node where value found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	int step = sqrt(size);
	listint_t *current = list;

	while (current != NULL && current->n < value)
	{
		printf("Value checked at index[%lu} = [%d]\n", current->index, current->n);
		current = current->next;
		if (current == NULL)
			return NULL;
		if (current->n - step >= value)
			current = current - step;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
			current->index, (current + step )->index);
 	while (current != NULL && current->n <= value)
	{
		printf("Value checked at index[%lu] = [%d]\n", current->index, current->n);
		if (current->n == value)
			return current;
		current = current->next;
	}
	return NULL;
}
