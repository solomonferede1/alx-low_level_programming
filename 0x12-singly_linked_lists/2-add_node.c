#include "lists.h"
/**
  * add_node - adde node at the end
  * @head: head
  * @str: string pointer
  * Return: address of new node
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->next = (*head);
	new->len = strlen(str);
	(*head) = new;

	return (*head);
}
