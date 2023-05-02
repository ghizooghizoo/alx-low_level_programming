#include "lists.h"

/**
 * find_listint_loop - frees a linked list
 * @head: head
 *
 * Return: number of elements in the freed list
 */
listint_t *find_listint_loop(listint_t *head)
{
	size_t len = 0;
	int diff;
	listint_t *temp;

	if (!head || !*head)
		return (0);

	while (*head)
	{
		diff = *head - (*head)->next;
		if (diff > 0)
		{
			temp = (*head)->next;
			free(*head);
			*head = temp;
			len++;
		}
		else
		{
			free(*head);
			*head = NULL;
			len++;
			break;
		}
	}

	*head = NULL;
	return (len);
}
