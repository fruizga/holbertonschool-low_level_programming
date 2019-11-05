#include "lists.h"
/**
 *sum_listint - sum all data of the list
 *@head: pointer to head of list
 *Return: 0 if list is empty else if there are nodes
 */
int sum_listint(listint_t *head)
{
	int cnt = 0;
	listint_t *h;

	h = head;
	if (h == NULL)
	{
		return (0);
	}
	else
	{
	while (h)
	{
		cnt  = cnt + h->n;
		h = h->next;

	}


	return (cnt);
	}
}
