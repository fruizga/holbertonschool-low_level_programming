#include "lists.h"
/**
 *delete_nodeint_at_index - delete a singular node
 *@head: pointer to head of list
 *@index: position of node to delete
 *Return: Success or no
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *h, *del;
	unsigned int pos = 0;

	h = *head;
	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		del = h;
		h = h->next;
		*head = h;
		free(del);
		return (1);
	}
	else
	{
		while (pos < (index - 1))
		{
			if (*head == NULL)
			{
				return (-1);
			}
			h = h->next;
			pos++;
		}
		del = h->next;
		h->next = del->next;
		free(del);
		return (1);
	}

}
