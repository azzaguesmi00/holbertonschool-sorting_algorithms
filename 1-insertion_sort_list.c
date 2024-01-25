#include "sort.h"
#include <stdio.h>

/**
 * insertion_sort_list- insertion sorts a doubly linked list
 * @list: address of pointer
 *
 * Return: void
 */
void insertion_sort_list(listint_t **list)

{
	listint_t *t = *list, *swap, *j;

	j = *list;
	while (j)
	{
		t = j;
		while (t->prev && t->prev->n > t->n)
		{
			swap = t->prev;

			t->prev = swap->prev;
			swap->next = t->next;
			if (t->prev)
				t->prev->next = t;
			swap->prev = t;
			t->next = swap;
			if (swap->next)
				swap->next->prev = swap;
			if (!t->prev)
				*list = t;
			t = swap->prev;
			print_list(*list);
		}
		j = j->next;
	}
}