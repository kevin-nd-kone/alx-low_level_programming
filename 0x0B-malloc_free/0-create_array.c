#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - funtion that return null or pointer
 *
 *@size : param unsigned int
 *@c : param char
 *
 *Return : char *
 */
char *create_array(unsigned int size, char c)
{
if (size == 0)
{
return (NULL);
}
c = malloc(size * sizeof(c));
if (c == NULL)
{
return (NULL);
}
return (c);
}
