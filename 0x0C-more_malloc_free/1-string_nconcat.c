#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concartenat two string
 *
 * @s1: param pointer char
 * @s2: param pointer char
 * @n: param unsigned int
 * Return: return pointer to concart string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *strg;
    unsigned int i = 0, j = 0, l1, l2;
    if (s1 == NULL)
    {
        s1 = "";
    }
    if (s2 == NULL)
    {
        s2 = "";
    }
    l1 = len(s1);
    l2 = len(s2);
    strg = malloc((l1 * l2) * sizeof(char) + 1);
    if(strg == NULL)
        return NULL;
    // insertion of s1
    while (s1[i] != '\0')
    {
        strg[j] = s1[i];
        i++;
        j++;
    }
    // insertion of s2
    if(l1 >= l2)
    i = 0 ;
    while (s2[i] != '\0')
    {
        strg[j] = s2[i];
        i++;
        j++;
    }
    i = 0;
    while ((i + 1) <= n && n <= l2)
    {
        strg[j] = s2[i];
        i++;
        j++;
    }
    strg[j] = '\0';
    return (strg);
    }

/**
 * len - determinate the lengh of string
 * 
 * @s: param char 
 * Return: return lenght of string 
 */

int len(char *s)
{
    int lenght;
    while (*(s + 1) != '\0')
    {
        lenght++;
    }
    return (lenght);
}