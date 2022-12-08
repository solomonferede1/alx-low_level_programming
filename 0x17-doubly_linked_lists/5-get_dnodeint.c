#include "lists.h"
/**
  * get_dnodeint_at_index - find element of doubly linked list at index
  * @head: head
  * @index: index to be returned
  * Return: pointer to the element at index index
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int counter;

	if (!head)
		return (NULL);

	tmp = head;
	counter = 0;
	while (tmp)
	{
		if (counter == index)
			return (tmp);
		counter++;
		tmp = tmp->next;
	}
	return (NULL);
}
