#include "lists.h"
/**
  * dlistint_len - print elements of doubly linked list
  * @h: head
  * Return: The number of nodes
  */
size_t dlistint_len(const dlistint_t *h)
{
	int counter;

	counter = 0;
	while (h)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
