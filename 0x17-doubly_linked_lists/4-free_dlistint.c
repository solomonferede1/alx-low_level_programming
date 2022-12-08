#include "lists.h"
/**
  * free_dlistint - free a doubly linked list
  * @head: head
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	tmp = head;
	while((tmp = tmp->next))
		free(tmp);
	free(head);
}
