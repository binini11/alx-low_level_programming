#include "lists.h"

/**
 * list_len - gives the number of elements is a list
 * @h: sigly lisked list.
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t en;

	en = 0;
	while (h != NULL)
	{
		h = h->next;
		en++;
	}
	return (en);
}
