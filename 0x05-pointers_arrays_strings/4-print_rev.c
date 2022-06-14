#include "main.h"
/**
 * print_rev - Prints a string in reverse
 *
 * @s: String
 */
void print_rev(char *s)
{
int i, len;
len = strlen(s);
for (i = len; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
