#include "lists.h"
/**
 *dlistint_len - print len of list
 * @h: pointer to head of list
 * Return: counter of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int cnt = 0;

	if (h == NULL)
	{
		return (-1);
	}
	else
	{
		while (h)
		{
			h = h->next;
			cnt++;
		}
	}
	return (cnt);
}