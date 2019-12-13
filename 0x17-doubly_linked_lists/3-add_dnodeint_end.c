#include "lists.h"
/**
 *add_dnodeint_end - add node at the end of list
 * @head: double pointer to head of list
 * @n: value to store
 * Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *aux;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		free(newNode);
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
		while (aux->next != NULL)
		{aux = aux->next; }
		newNode->n = n;
		aux->next = newNode;
		newNode->prev = aux;
		newNode->next = NULL;

	}
	return (newNode);
}