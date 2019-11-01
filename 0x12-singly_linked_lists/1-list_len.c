#include "lists.h"

/**
 * list_len - prints length of list
 * @h: pointer to list_t
 * Description: prints the length of a list
 * Return: number of items.
 */
size_t list_len(const list_t *h)
{
	int cnt = 0;

	while (h)
	{
		h = h->next;
		cnt++;
	}
	return (cnt);
}
