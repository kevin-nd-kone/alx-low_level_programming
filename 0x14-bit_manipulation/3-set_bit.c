#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 *
 * @n: unsigned long int param.
 * @index: unsigned int param.
 * Return: integer 1 alway.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 64)
{
return (-1);
}
*n ^= (1 << index);
return (1);
}
