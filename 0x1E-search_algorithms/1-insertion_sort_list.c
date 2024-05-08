#include <stdio.h>
#include "sort.h"
/**
 * insertion_sort_list - sorts list in ascending order with Insertion algorithm
 * @list: list gived
 *
**/
void insertion_sort_list(listint_t **list)
{
	listint_t *head;

	if (list == NULL)
	{
		return;
	}
	if (*list != NULL && (*list)->next == NULL)
	{
		return;
	}

	head = *list;
	while (head != NULL)
	{
		while (head->prev != NULL && head->prev->n > head->n)
		{
			head->prev->next = head->next;
			if (head->next != NULL)
			{
				head->next->prev = head->prev;
			}
			head->next = head->prev;
			head->prev = head->prev->prev;
			head->next->prev = head;
			if (head->prev != NULL)
			{
				head->prev->next = head;
			}
			if (head->prev == NULL)
			{
				*list = head;
			}
			print_list(*list);
		}
		head = head->next;
	}
}

