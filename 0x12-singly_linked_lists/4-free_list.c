#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: head of a linked list
 * Description: the func realease the memory allocated for a list:
 * it frees the memory
 */

void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);

		if (head->str)
		{
			free(head->str);
		}
		free(head);
	}
}
