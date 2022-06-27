#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *_strdup - funtion that return copy of string
 *
 *@str: param pointer to char
 *
 *Return: return pointer char or null
 */

char *_strdup(char *str)
{
char *c;
if(str == NULL)
{
printf("failed to allocate memory\n");
return (NULL);
}
c = strdup(str);
if (c == NULL)
{
printf("failed to allocate memory\n");
return (NULL);
}
else
{
return (c);
}
}
