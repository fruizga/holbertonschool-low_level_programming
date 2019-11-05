#include "lists.h"
/**
 *insert_nodeint_at_index - insert node in specific position
 *@head:duble pointer to head
 *@idx:position to insert
 *@n:value stored in new node
 *Return: Address of new node or NULL if it doesn'k work
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *h, *newNode;
	unsigned int pos = 0;

	h = *head;
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	if (idx == 0)
		{
			newNode->next = h;
			h = newNode;
		}
	while (pos < idx && h->next)
	{
		h = h->next;
		pos++;
	}
	newNode->next = h->next;
	h->next = newNode;

	return (newNode);
}
