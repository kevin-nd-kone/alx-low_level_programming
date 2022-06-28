#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *str_concat - function that concat two string
 *@s1: param pointer to char
 *@s2: param pointer to char
 *Return: return pointer char or null
 */
char *str_concat(char *s1, char *s2)
{
char *concat, *con;
int l1, l2, i, j;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
l1 = sizeof(s1) / sizeof(char);
l2 = sizeof(s1) / sizeof(char);
while (i < l1)
{
concat[i] = s1[i];
i++;
}
while (j < l2)
{
concat[j] = s1[j];
j++;
}
con = strdup(concat);
return (con);
}
