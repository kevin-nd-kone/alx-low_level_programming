#include "main.h"
/**
 * print_rev - Prints a string in reverse
 *
 * @s: String
 */
void print_rev(char *s)
{
int i, len, temp;
len = strlen(s);
for (i = 0; i < len / 2; i++)
{
temp = str1[i];
str1[i] = str1[len - i - 1];
str1[len - i - 1] = temp;
}
for (i = 0; i < len; i++)
{
_putchar(s[i]);
}
_putchar('\n');
}
