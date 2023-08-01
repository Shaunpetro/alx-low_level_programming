#include "lists.h"

/**
 * free_listint – function to free a linked list`
 * 
 * @head: listint_t is the list to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
