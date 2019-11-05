#include "lists.h"
/**
 *get_nodeint_at_index - returns the nth node of a list
 *@head:pointer to head list
 *@index:node position
 *Return: ntn node of the list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *h = head;

	if (h != NULL)
	{
		while (h)
		{

			if (i == index)
			{
				return (h);
			}
				h = h->next;
		i++;
		}
	}
	return (NULL);

}
