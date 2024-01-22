#include "sort.h"
/**
 *insertion_sort_list - Start of function that Sorts
 *a doubly linked list of integers
 *using the Insertion sort algorithm
 * @list: Double pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *crrnt, *srtd, *tp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
	{
		return;
	}
	srtd = (*list)->next;
	while (srtd != NULL)
	{
		crrnt = srtd;
		srtd = srtd->next;

		while (crrnt->prev != NULL && crrnt->n < crrnt->prev->n)
		{
			tp = crrnt->prev;
			tp->next = crrnt->next;
			if (crrnt->next != NULL)
				crrnt->next->prev = tp;
			crrnt->prev = tp->prev;
			crrnt->next = tp;
			if (tp->prev != NULL)
				tp->prev->next = crrnt;
			else
				*list = crrnt;
			tp->prev = crrnt;

			print_list(*list);
		}
	}
}
