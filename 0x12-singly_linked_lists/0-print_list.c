#include "lists.h"
/**
  * print_list - print elements of the list
  * @h: linked lists
  * Return: size
  */
size_t print_list(const list_t *h)
{
	unsigned int count;

	count = 0;
	while (h)
	{
		if (h->str == NULL)
			printf("[0] %s\n", "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}
	return (count);
}
