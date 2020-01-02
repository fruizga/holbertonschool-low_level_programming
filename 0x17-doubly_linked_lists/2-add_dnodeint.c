#include "lists.h"
/**
 *add_dnodeint - double pointer to head of list
 * @head:counter
 *@n: value to stare in node
 *Return: new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
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
		newNode->n = n;
		newNode->next = aux;
		newNode->prev = NULL;
		aux->prev = newNode;
		*head = newNode;

	}
	return (newNode);
}