#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 * @list: pointer to the head of the doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *cur, *nnode, *prv;

	if (*list == NULL || (*list)->next == NULL)
	return;

	cur = (*list)->next;
	while (cur != NULL)
	{
		nnode = cur->next;
		while (cur->prev != NULL && cur->n < cur->prev->n)
		{
			prv = cur->prev;
			if (prv->prev != NULL)
			prv->prev->next = cur;
			else
			*list = cur;

			prv->next = cur->next;
			if (cur->next != NULL)
			cur->next->prev = prv;

			cur->prev = prv->prev;
			cur->next = prv;
			prv->prev = cur;

			print_list(*list);
		}

		cur = nnode;
	}

}
