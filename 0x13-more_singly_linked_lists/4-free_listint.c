#include "lists.h"
/**
 * free_listint - frees a linked list
 * @head: pointer to the head node
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	/*create a pointer to the head*/
	listint_t *zoid_node = NULL;

	if (head != NULL)
	{
		while (head->next != NULL)
		{
			zoid_node = head;
			head = head->next;
			free(zoid_node);
		}
		free(head);
	}

}