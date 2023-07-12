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
	size_t i, step = sqrt(size);
	listint_t *left = list, *right = list;

	if (list == NULL)
		return (NULL);

	while (right != NULL && right->n < value)
	{
		i = 0;
		left = right;
		while (i < step && right->next != NULL)
		{
			right = right->next;
			i++;
		}
		printf("Value checked at index [%lu] = [%d]\n", right->index, right->n);
		if (right->next == NULL)
			break;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
			left->index, right->index);
	do {
		printf("Value checked at index [%lu] = [%d]\n", left->index, left->n);
		if (left->n == value)
			return (left);
		left = left->next;
	} while (left != right && left->n <= value);
	printf("Value checked at index [%lu] = [%d]\n", left->index, left->n);
	return (NULL);
}
