#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 *
 * @n: unsigned long int param.
 * @index: unsigned int param.
 * Return: -1 when index > 64 otherwise 1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 64)
{
return (-1);
}
*n &= ~(1 << index);
return (1);
}
