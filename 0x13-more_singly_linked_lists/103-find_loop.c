#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: head
 *
 * Return: address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *temp = head;
	listint_t *current_Node = head;

	while (current_Node != NULL && current_Node->next != NULL)
	{
		temp = temp->next;
		current_Node = current_Node->next->next;
		if (temp == current_Node)
		{
			break;
		}
	}
	if (current_Node == NULL || current_Node->next == NULL)
		return (NULL);
	temp = head;
	while (temp != current_Node)
	{
		temp = temp->next;
		current_Node = current_Node->next;
	}

	return (temp);
}