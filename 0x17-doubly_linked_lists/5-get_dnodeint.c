#include "lists.h"
/**
 *get_dnodeint_at_index - return node at index
 *@head: pointer to head of list
 *@index: position to be obtained
 *Return: NOde at index if it's ok or NULL if not
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *aux;
	unsigned int i = 0;

	aux = head;
	if (head == NULL)
	{
		return (NULL);
	}
	while (aux)
	{
		if (i == index)
		{
			return (aux);
		}
		i++;
		aux = aux->next;
	}
	return (NULL);
}
