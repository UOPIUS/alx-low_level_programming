#include "lists.h"

/**
 * add_nodeint_end - Add a new node at the end of a listint_t list
 * @head: listint_t list
 * @n: value of data to add
 * Return: pointer or null
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *pointerNode = NULL;

	pointerNode = malloc(sizeof(listint_t *));
	if (pointerNode == NULL)
		return (0);
	pointerNode->n = n;
	pointerNode->next = NULL;
	if (*head == NULL)
	{
		*head = pointerNode;
	}
	else
	{
		listint_t *nodeList = *head;

		while (nodeList->next != NULL)
			nodeList = nodeList->next;
		nodeList->next = pointerNode;
	}
	return (pointerNode);
}
