#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 *
 * @n: unsigned long int param
 * @index: unsigned int param
 * Return: integer
 */
int get_bit(unsigned long int n, unsigned int index)
{
const int num = 64;
const int init = 0;
if (index > num)
return (-1);
if (n == init)
{
return (init);
}
n = n >> index;
if ((n & 1) != init)
{
return (init);
}
}
