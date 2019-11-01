#include "lists.h"
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - add new node at the beginning
 * @head: Address of the new elements
 *@str: value to store in the new node
 * Description: prints elements of a list
 * Return: Addressof new nodes.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	if (head == NULL)
		return (NULL);
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	if (*head == NULL)
		newNode->next = NULL;
	else
		newNode->next = *head;
	newNode->str = strdup(str);
	newNode->len = strlen(str);
	*head = newNode;
	return (*head);
}
