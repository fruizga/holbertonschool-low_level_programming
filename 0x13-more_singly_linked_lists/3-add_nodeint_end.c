#include "lists.h"
/**
 *add_nodeint_end - add nodes at the end
 *@head: pointer to the head of list
 *@n: value to be staored
 *Return:new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *aux = *head;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		while (aux->next != NULL)
		{aux = aux->next; }
		aux->next = newNode;

	}
	return (newNode);
}
