#include "lists.h"
/**
 * listint_len - compute number of elements of a linked list.
 * @h: head of linked list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	unsigned int i;

	i = 0;
	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
