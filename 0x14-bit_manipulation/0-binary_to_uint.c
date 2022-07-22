#include <stdlib.h>
#include "main.h"
/**
* binary_to_uint - convert binary to int.
*
* @b: constant param char
* Return: number that are converted otherwise 0.
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int value = 0, count = 0;
if (b == NULL)
return (0);
while (b[value])
{
if (!(b[value] == '0' || b[value] == '1'))
return (0);
count <<= 1;
if (b[value] == '1')
count += 1;
value++;
}
return (count);
}
