#include "lists.h"
/**
  * add_node - add node at the end
  * @head: head
  * @str: string to be write
  * Return: pointer to new added element
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->len = strlen(str);
	new->str = strdup(str);
	new->next = NULL;
	if (*head)
	{
		*head = new;
		return (new);
	}
	while ((*head)->next)
		(*head) = (*head)->next;
	(*head)->next = new;
	return (new);
}
	
