#include "lists.h"

/**
* pop_listint - deletes the head node of a
* listint_t linked list, and returns the head node’s data (n).
* @head: struct list items
* Return: node data
*/
int pop_listint(listint_t **head)
{
	listint_t *temp = NULL;
	int data = 0;

	if (*head == NULL)
		return (0);
	temp = (*head)->next;
	data = (*head)->n;
	*head = temp;
	return (data);
}
