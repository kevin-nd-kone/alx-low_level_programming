#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints all elements of a list_t list.
 *
 * @h: pointer to struct list_t.
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
const list_t *temp = h;
int counter = 0;

while (temp != NULL)
{
if (temp->str == NULL)
{
printf("[%d] %s\n", 0, "(nil)");
}
else
printf("[%d] %s\n", temp->len, temp->str);
counter++;
temp = temp->next;
}
return (counter);
}
