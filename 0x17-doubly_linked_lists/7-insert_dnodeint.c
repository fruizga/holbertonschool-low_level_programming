#include "lists.h"
/**
 * insert_dnodeint_at_index - insert new node at given position.
 * @h: double pointer to head of list
 * @idx: position to add node
 * @n: value to store in node
 * Return: new node if all is ok.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *aux;
	unsigned int i;

	if (h == NULL)
	{return (NULL); }
	if (idx == 0)
	{return (add_dnodeint(h, n)); }

	newNode = malloc(sizeof(dlistint_t));
	if (newNode)
	{return (NULL); }
	newNode->n = n;

	aux = *h;
	for (i = 0; aux && i < idx; i++)
	{aux = aux->next; }
	if (aux == NULL && i == idx)
	{return (add_dnodeint_end(h, n)); }
	else if (aux)
	{
		aux->prev->next = newNode;
		newNode->prev = aux->prev;
		aux->prev = newNode;
		newNode->next = aux;
		return (newNode);
	}
	return (NULL);
}
