#include "lists.h"
/**
 * add_nodeint_end - add node at the end of linked lists
 * @head: head
 * @n: n field
 * Return: address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tmp;

	tmp = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while(tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	return (new);
}
