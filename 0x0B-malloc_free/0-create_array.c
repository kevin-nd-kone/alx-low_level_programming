#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - funtion that return null or pointer
 *
 *@size: param unsigned int
 *@c: param char
 *
 *Return: return pointer char or null
 */
char *create_array(unsigned int size, char c)
{
char *chars;
if (size == 0)
{
return (NULL);
}
chars = malloc(size * sizeof(c));
if (chars == NULL)
{
return (NULL);
}
return (*chars);
}
