
/**
 * insertion_sort_list - function that sort a list
 * @list: the list to sort
 */

#include "sort.h"
void insertion_sort_list(listint_t **list)
{
	listint_t *current = NULL;

	if (!list || !(*list))
		return;

	for (current = *list; current; current = current->next)
	{
		while (current->prev && current->prev->n > current->n)
		{
			listint_t *insertion_point = current->prev;
			listint_t *temp_next = current->next;
			listint_t *temp_prev_prev = current->prev->prev;

			insertion_point->next = temp_next;
			if (temp_next)
				temp_next->prev = insertion_point;
			current->next = insertion_point;
			current->prev = temp_prev_prev;
			insertion_point->prev = current;
			if (temp_prev_prev)
				temp_prev_prev->next = current;
			else
				*list = current;
			print_list(*list);
		}
	}
}
