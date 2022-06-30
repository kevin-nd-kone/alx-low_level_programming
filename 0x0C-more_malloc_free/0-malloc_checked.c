#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate a memory
 *
 * @b: param int
 * Return: pointer to allocate memory
 */
void *malloc_checked(unsigned int b)
{
int *memo;
memo = malloc(b);
if (memo == NULL)
{
exit(98);
}
return (memo);
}
