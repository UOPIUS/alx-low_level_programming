#include "lists.h"

/**
 * listint_len - counts the number of elements in a linked listint_t list
 * @h: linklist list
 * Return: size_t - number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;
	const listint_t list;

	list = h;
	while (list->next != NULL)
	{
		counter++;
		list = list->next;
	}
	return (counter);
}
