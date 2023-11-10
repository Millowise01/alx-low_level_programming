#include "lists.h"

/**
 * dlistint_len - to count the number of elements
 * @h: the head of list
 * Return: to the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
    size_t nodes = 0;

    while (h)
    {
        nodes++;
        h = h->next;
    }

    return (nodes);
}
