#include "lists.h"
/**
 *add_nodeint - Add node at the begining
 *@head: pointer to the head of list
 *@n: value to be stored in new node
 *Return:New list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *aux;

	aux = malloc(sizeof(listint_t));
	if (aux == NULL)
		return (NULL);


	(*aux).n = n;
	(*aux).next = *head;
	*head = aux;

	return (aux);
}
