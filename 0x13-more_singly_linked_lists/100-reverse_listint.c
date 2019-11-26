#include "lists.h"

/**
 * reverse_listint - reverse a linked list
 * @head: pointer to head node
 * Return: pointer to the first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *cp_head = *head, *next;

	while (cp_head != NULL)
	{
		next = cp_head->next;
		cp_head->next = prev;
		prev = cp_head;
		cp_head = next;
	}
	*head = prev;
	return (*head);
}
