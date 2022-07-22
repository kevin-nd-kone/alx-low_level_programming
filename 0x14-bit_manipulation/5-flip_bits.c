#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip to get from one number to another.
 *
 * @n: unsigned long int param.
 * @m: unsigned long int param.
 * Return: unsigned int.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned value = n ^ m;
unsigned i = 0;
while (i > 0)
{
i++;
i &= (i - 1); 
}
return (i);
}
