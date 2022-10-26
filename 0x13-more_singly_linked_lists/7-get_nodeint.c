#include "lists.h"

/**
 * get_nodeint_at_index - return a single node
 * @h: struct list items
 * Return: size_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
{
	size_t counter = 0;
	const listint_t *temp;

	temp = h;
	while (temp != NULL)
	{
		if (counter == index)
			return temp;
		counter = counter + 1;
		temp = temp->next;
	}
	return (NULL);
}
