#include "lists.h"
/**
  * insert_dnodeint_at_index - insert new elements at index doubly linked list
  * @h: head
  * @n: data of the new node
  * @idx: Index
  * Return: The address of the new element
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp;
	unsigned int counter;

	if (!(*h))
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	tmp = *h;
	counter = 0;
	while (tmp)
	{
		if (counter + 1 == idx)
		{
			new->next = tmp->next;
			tmp->next = new;
			new->prev = tmp;
			return (new);
		}
		counter++;
		tmp = tmp->next;
	}
	return (NULL);
}
