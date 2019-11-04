#include "lists.h"
/**
*pop_listint - Free
*head: pointer to head pointer
*Return: Value stored in node deleted
*/
int pop_listint(listint_t **head)
{
	listint_t * a, *b;
	int value;

        a = *head;
	b = a->next;
	value = a->n;
	*head = b;
	free (a);
	return (value);
}
