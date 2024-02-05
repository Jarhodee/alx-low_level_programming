#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list.
 * @h: head
 *
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	listint_t *current_Node = *h;
	size_t count = 0;

	while (current_Node != NULL)
	{
		temp = current_Node;
		current_Node = current_Node->next;
		free(temp);
		count++;
		if (temp <= current_Node)
		{
			*h = NULL;
			break;
		}
	}

	return (count);
}