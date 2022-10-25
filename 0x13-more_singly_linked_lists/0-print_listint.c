/**
 * print_listint - prints and return all the elements of a listint_t list
 * @h: struct list items
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;
	const listint_t *temp;

	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		counter = counter + 1;
		temp = temp->next;
	}
	return (counter);
}
