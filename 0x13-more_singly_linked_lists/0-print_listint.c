#include "lists.h"
/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: linked list of type listint_t to print
 *
 * Description: the function prints all the elements of a listint_t list
 * Return: number of elements
 */
size_t print_listint(const listint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		printf("%d\n", h->n);
		elements++;
		h = h->next;
	}

	return (elements);
}
