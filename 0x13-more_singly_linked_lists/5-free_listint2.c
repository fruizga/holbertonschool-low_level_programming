#include "lists.h"
/**
 *
 *
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *aux;

	while (*head != NULL )
	{

		aux = *head;
		*head = (*head)->next;
		free(aux);

	}
	*head = NULL;
}
