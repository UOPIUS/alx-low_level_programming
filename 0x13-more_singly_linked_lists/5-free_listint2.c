#include "lists.h"

/**
 * free_listint2 - free a listint_t list, set head to NULL
 * @head: listint_t list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *nHead;

	nHead = *head;
	while (nHead != NULL)
	{
		tmp = nHead;
		nHead = nHead->next;
		free(tmp);
	}
	free(nHead);
}
