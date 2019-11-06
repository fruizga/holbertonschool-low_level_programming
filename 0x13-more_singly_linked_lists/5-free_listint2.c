#include "lists.h"
/**
 * free_listint2 - free list
 *@head: pointer to head of list
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *aux;

	if (*head == NULL)
	{
		return;
	}
	else
	{
		aux = *head;
		while (*head != NULL)
		{


			aux = aux->next;
			free(aux);
			*head = aux;

		}
		*head = NULL;
	}
}
