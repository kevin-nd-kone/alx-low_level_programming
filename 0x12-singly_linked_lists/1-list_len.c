#include <stdlib.h>
#include "lists.h"

/**
 * list_len - return linked list element number.
 * @h: pointer to structure.
 * Return: number of elements in list_t list
 */
size_t list_len(const list_t *h)
{
const list_t *temp_value = h;
int counter = 0;

while (temp_value != NULL)
{
counter++;
temp_value = temp_value->next;
}
return (counter);
}
