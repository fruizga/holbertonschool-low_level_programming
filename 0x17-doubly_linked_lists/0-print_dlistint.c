#include "lists.h"
/**
 * 
 * 
 * 
 */
size_t print_dlistint(const dlistint_t *h)
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
			printf("%d\n", h->n);
			h = h->next;
			cnt++;
			}
	}
	return (cnt); 
}