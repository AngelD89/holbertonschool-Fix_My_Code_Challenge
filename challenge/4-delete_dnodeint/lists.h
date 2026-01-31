#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct dlistint_s - doubly linked list node
 * @n: integer stored in the node
 * @prev: pointer to the previous element
 * @next: pointer to the next element
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);
void free_dlistint(dlistint_t *head);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

#endif /* LISTS_H */
