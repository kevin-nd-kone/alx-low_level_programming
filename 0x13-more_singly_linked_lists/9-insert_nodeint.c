#include <stdlib.h>
#include "lists.h"

/**
 * *insert_nodeint_at_index - function that inserts a new node at a given position.
 *
 * @head: pointer to a pointer to head
 * @idx: index of the list where the new node should be added.
 * @n: element to insert.
 * Return: address of the new node, NULL if failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *curr, *node;
curr = *head;
node = malloc(sizeof(listint_t));
if (node == NULL)
return (NULL);
node->n = n;
node->next = NULL;
if (idx == 0)
{
node->next = *head;
*head = node;
return (node);
}
for (i = 0; i < idx - 1; i++)
{
curr = curr->next;
if (curr == NULL)
{
return (NULL);
}
}
node->next = curr->next;
curr->next = node;
return (node);
}