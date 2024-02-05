#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 * 
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;
    listint_t *ne_w;
    listint_t hello = {8, NULL};
    size_t n;

    head = &hello;
    ne_w = malloc(sizeof(listint_t));
    if (ne_w == NULL)
    {
        printf("Error\n");
        return (1);
    }
    ne_w->n = 9;
    ne_w->next = head;
    head = ne_w;
    n = print_listint(head);
    printf("-> %lu elements\n", n);
    free(ne_w);
    return (0);
}