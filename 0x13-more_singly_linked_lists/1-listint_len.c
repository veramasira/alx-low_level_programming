#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: head of linked list
 *
 * Description: the function returns the number of elements,
 * in a linked listint_t list
 * Return: The number of elements in the list.
 */

size_t listint_len(const listint_t *h)
{
	size_t elems = 0;

	while (h)
	{
		printf("%d\n", h->n);
		elems++;
		h = h->next;
	}

	return (elems);
}
