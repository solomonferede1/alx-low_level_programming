#include "lists.h"
/**
  * list_len - return size of a linked list
  * @h: linked lists
  * Return: size of linked lists
  */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
