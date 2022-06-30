#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - 
 *
 * @b : param int 
 * Return : pointer to allocate memory
 */
void *malloc_checked(unsigned int b)
{
int *memo;
memo = malloc(b);
if (memo != NULL)
{
return memo;
}
else
{
return (98);
}
}