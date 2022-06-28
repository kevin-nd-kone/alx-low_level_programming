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
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
strcat(s1, s2);
return (s1);
}
