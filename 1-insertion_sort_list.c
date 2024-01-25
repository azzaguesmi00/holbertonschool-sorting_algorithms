#include "sort.h"
#include <stdio.h>

/**
 * swap-swaps 2 nodes
 * @a: address of the first node
 * @b: address of the second node
 *
 * Return: void
 */
void swap(listint_t *a, listint_t *b)
{
	if (a->prev)
		a->prev->n = b;
	if (b->next)
		b->next->prev = a;
	a->next = b->next;
	b->prev = a->prev;
	a->prev = b;
	b->next = a;
}

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