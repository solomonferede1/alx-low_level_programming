#include "lists.h"
/**
 * add_nodeint - add node at the beginning
 * @head: head of the linked list
 * @n: element value to be added
 * Return: the address of the new elemnt
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t *));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = (*head);
	*head = new;
	return (new);
}
