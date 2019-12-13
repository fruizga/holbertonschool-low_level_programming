#include "lists.h"
/**
 *free_dlistint - free double linked list
 * @head: pointer to head of double linked list
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	aux = head;

	while (aux)
	{
		free(&head->n);
		head = aux->next;
		aux = aux->next;
	}
	free(head);
}