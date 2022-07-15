#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to list_t.
 * Return: nothing.
 */
void free_list(list_t *head)
{
list_t *temp_value;

while (head != NULL)
{
temp_value = head->next;
free(head->str);
free(head);
head = temp_value;
}
}
