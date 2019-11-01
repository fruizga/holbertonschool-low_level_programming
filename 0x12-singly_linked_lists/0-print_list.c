#include "lists.h"

/**
 * print_list - prints elements of list
 * @h: pointer to list_t
 * Description: prints elements of a list
 * Return: number of nodes.
 */
size_t print_list(const list_t *h)
{
	int nodo;

       	for (nodo = 0; h; nodo++)
	{
		if ((*h).str == NULL)
		{printf("[0] (nil)\n"); }
		else
		{printf("[%d] %s\n", (*h).len, (*h).str); }
		h = (*h).next;
	}
	return (nodo);
}
