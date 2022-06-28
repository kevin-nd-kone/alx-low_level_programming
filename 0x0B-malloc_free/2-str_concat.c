#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *str_concat - function that concat two string
 *
 *@s1: param pointer to char
 *@s2: param pointer to char
 *Return: return pointer char or null
 */

char *str_concat(char *s1, char *s2)
{
char *mall;
int l1, l2, i;
mall = malloc(sizeof(s1) + sizeof(s2));
if (mall == NULL)
{
return (NULL);
}
else
{
if (s1 == NULL && s2 == NULL)
{
mall[1] = "";
mall[2] = "";
return (mall);
}
else if (s1 != NULL && s2 != NULL)
{
l1 = sizeof(s1) / sizeof(char);
l2 = sizeof(s2) / sizeof(char);
for (i = 0; i < l1; i++)
{
mall[i] = s1[i];
}
for (i = 0; i < l2; i++)
{
mall[l1 + i + 1] = s2[i];
}
return (mall);
}
else if (s1 == NULL && s2 != NULL)
{
mall[1] = "";
l2 = sizeof(s2) / sizeof(char);
for (i = 0; i < l2; i++)
{
mall[1 + i + 1] = s2[i];
}
return (mall);
}
else
{
l1 = sizeof(s1) / sizeof(char);
for (i = 0; i < l1; i++)
{
mall[i] = s1[i];
}
mall[l1 + 1] = "";
return (mall);
}
}
}