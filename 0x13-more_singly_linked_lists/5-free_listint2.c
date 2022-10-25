#include "lists.h"

/**
 * free_listint2 - free a listint_t list, set head to NULL
 * @head: listint_t list
 */
void free_listint2(listint_t **head)
{
	listint_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node);
	}
	free(head);
}
