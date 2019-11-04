#include "lists.h"
/**
 *free_listint - Free memory
 *@head: pointer to list
 *
 */
void free_listint(listint_t *head)
{
	listint_t *aux = head;

	while (aux)
	{

		free(head);
		head = aux->next;
		aux = aux->next;
	}
	free(head);
}
