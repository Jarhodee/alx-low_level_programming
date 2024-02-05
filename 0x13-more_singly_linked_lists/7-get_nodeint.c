#include "lists.h"
/**
 * get_nodeint_at_index - returns the node base on given index
 * @head: the head node
 * @index: the index to look for
 * Return: the node base on given index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/* create a pointer to hold the head node */
	listint_t *xom_head = head;

	/*check if head is NULL*/
	if (xom_head == NULL)
		return (NULL);

	/*loop through the nodes and get their index */
	while (xom_head != NULL)
	{
		/*use index 0 as base for returning node*/

		if (index == 0)
			return (xom_head);

		/*move to next node */
		xom_head = xom_head->next;
		index--;/*decrements index in case it starts beyond 0*/
	}

	return (NULL);/*if no valid index*/
}