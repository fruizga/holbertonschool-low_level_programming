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
 * Return: Address of new nodes.
 */
list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *aux;

	aux = malloc(sizeof(list_t));
	if (aux == NULL)
		return (NULL);
	while (str[i])
		i++;

	(*aux).str = strdup(str);
	(*aux).len = i;
	(*aux).next = *head;
	*head = aux;
	return (aux);
}
