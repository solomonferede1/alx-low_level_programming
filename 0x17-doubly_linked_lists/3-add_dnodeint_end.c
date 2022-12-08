#include "lists.h"
/**
  * add_dnodeint_end - add a new elements at the end of doubly linked list
  * @head: head
  * @n: data of the new node
  * Return: The address of the new element
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *tmp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	tmp = *head;
	while (tmp->next)
		tmp = (tmp)->next;
	(tmp->next) = new;
	new->prev = tmp;
	return (new);
}
