#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - search for an integer
 * 
 * @array: array of integer
 * @size: size of array
 * @cmp: function pointer
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array && cmp && size > 0)
for (i = 0; i < size; i++)
if ((cmp)(array[i]))
return (i);
return (-1);
}
