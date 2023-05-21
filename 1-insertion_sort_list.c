
/**
 * insertion_sort_list - function that sort a list
 * @list: the list to sort
 */

#include "sort.h"

void insertion_sort_list(listint_t **list)
{
	/* Initial check for empty list or single element */
	if (list == NULL || *list == NULL || (*list)->next == NULL)
	return;

	listint_t *current = (*list)->next; /* Points to the second node of th list */

	while (current != NULL)
	{
	listint_t *insertion_point = current->prev; /* Initial insertion point */
	int value = current->n; /* Value of the current node */

	/* Shifting the nodes in the sorted part to the right */
	while (insertion_point != NULL && insertion_point->n > value)
	{
	insertion_point->next->n = insertion_point->n;
	insertion_point = insertion_point->prev;
	}

	/* Inserting the current node at its correct position */
	if (insertion_point == NULL)
	{
		(*list)->n = value; /* The current node becomes the first node of the list */
	}
	else
	{
		insertion_point->next->n = value;
	}

	print_list(*list); /* Print the list after each iteration */

	current = current->next; /* Move to the next node */
	}
}
