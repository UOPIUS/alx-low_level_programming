#include "lists.h"

/**
 * add_nodeint - adds a node at the beginning of the listint_t list
 * @head: head of the node
 * @n: value of the data
 * Return: address of new element or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t *));
	if (new_node == NULL)
		return (0);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
