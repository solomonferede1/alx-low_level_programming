#include "lists.h"
/**
 * fre_listint2 - free to NULL
 * @head - head of linked lists
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head)
	{
		tmp = (*head)->next;
		*head = NULL;
		(*head)->next = tmp;
	}
}
