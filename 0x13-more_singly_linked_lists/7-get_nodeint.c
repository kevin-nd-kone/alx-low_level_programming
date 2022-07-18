#include <stdlib.h>
#include "lists.h"

/**
 * *get_nodeint_at_index - function that returns the nth node of a linked list.
 *
 * @head: pointer to first elements.
 * @index: index of the nth node.
 * Return: return nth node of a linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int counter;
listint_t *curr_node = head;
for (counter = 0; curr_node != NULL; counter++)
{
if (counter == index)
return (curr_node);
curr_node = curr_node->next;
}
return (NULL);
}