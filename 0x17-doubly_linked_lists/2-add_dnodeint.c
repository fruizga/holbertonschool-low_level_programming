#include "lists.h"
/**
 * 
 * 
 * 
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *aux;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = newNode;
		newNode->n = n;
		newNode->next = NULL;
		newNode->prev = NULL;
	}
	else
	{
		aux = *head;
		newNode->n = n;
		newNode->next = aux;
		newNode->prev = NULL;
		*head = newNode;

	}
	return (newNode);
}