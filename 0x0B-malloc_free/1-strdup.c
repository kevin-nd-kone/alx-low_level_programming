#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *str_concat - funtion that return copy of string
 *
 *@str: param pointer to char
 *
 *Return: return pointer char or null
 */

char *_strdup(char *str)
{
char *c;

c = strdup(str);
if (c == NULL)
{
return (NULL);
}
return (c);
}