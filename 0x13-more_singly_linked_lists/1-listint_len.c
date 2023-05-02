#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: head of linked list
 *
 * Return: The number of nodes in the list.
 */

size_t list_len(const list_t *h)
{
	size_t num;
i
	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
