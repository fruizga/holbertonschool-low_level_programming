#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 *listint_len - Returns the number of nodes
 *@h: pointer to head of list
 *Return: counter of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t cnt = 0;

	while (h)
	{
		h = h->next;
		cnt++;
	}
	return (cnt);
}
