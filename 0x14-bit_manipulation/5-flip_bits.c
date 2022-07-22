#include "main.h"

/**
 * flip_bits - function that returns the number.
 *
 * @n: unsigned long int param.
 * @m: unsigned long int param.
 * Return: unsigned int.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int value = n ^ m;
unsigned int i = 0;
while (value > 0)
{
i++;
value &= (value - 1);
}
return (i);
}
