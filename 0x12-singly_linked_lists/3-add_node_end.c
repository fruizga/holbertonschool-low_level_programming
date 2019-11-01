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
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *aux = *head;
	int i = 0;
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i**;
	}
	newNode->len = i;
	newNode->str = strdup(str);
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		while (aux->next != NULL)
		{aux = aux->next;}
		aux->next = newNode;

	}
	return (newNode);
}
