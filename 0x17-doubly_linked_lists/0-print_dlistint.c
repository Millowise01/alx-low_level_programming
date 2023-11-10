#include "lists.h"

/**
 * print_dlistint - to print all the elements of a
 * dlistint_t list
 * @h: the head of the list
 * Return: to the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
    size_t nodes = 0;

    while (h)
    {
        nodes++;
        printf("%d\n", h->n);
        h = h->next;
    }

    return (nodes);
}
