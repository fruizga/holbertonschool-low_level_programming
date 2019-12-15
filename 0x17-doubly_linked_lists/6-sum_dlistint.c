#include "lists.h"
/**
 *sum_dlistint - return sum of all data of a list
 *@head: pointer to head of list
 *Return: 0 if the list is empty or the sum if it's not
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *aux;
	int suma = 0;

	if (aux == NULL)
	{
		return (0);
	}
	else
	{
		while (aux)
		{
			suma = suma + aux->n;
			aux = aux->next;
		}
		return (suma);
	}
}
