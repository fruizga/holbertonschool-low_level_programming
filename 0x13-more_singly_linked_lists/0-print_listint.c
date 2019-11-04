#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *print_listint - print elements and count them
 *@h: pointer to head
 *Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int cnt = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		cnt++;
	}


	return (cnt);


}
