#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of int
 * @min: minimum value.
 * @max: maximum value
 *
 * Return: pointer to newly created array of success,
 * NULL if min > max, or if malloc fails.
 */
int *array_range(int min, int max)
{
unsigned int arr_size, i;
int *new_arr;

if (min > max)
return (NULL);
arr_size = max - min;
new_arr = malloc(sizeof(int) * (arr_size + 1));
if (new_arr == NULL)
return (NULL);
for (i = 0; i < arr_size; i++)
new_arr[i] = i + min;
new_arr[arr_size] = max;
return (new_arr);
}