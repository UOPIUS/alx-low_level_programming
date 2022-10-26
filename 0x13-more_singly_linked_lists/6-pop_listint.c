#include "lists.h"

/**
 * pop_listint - deletes the head node of a 
 * listint_t linked list, and returns the head node’s data (n).
 * @h: struct list items
 * Return: size_t
 */
int pop_listint(listint_t **head)
{
	const listint_t *temp = NULL;
	int data = 0;

	if (*head == NULL)
		return (0);
	temp = (*head)->next;
	data = (*head)->n;
	*head = temp;
	return (data);
}
