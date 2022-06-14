#include "main.h"
#include <stdio.h>

/**
 * _puts - print string
 *@str : param string
 * Return: Always 0.
 */

void rev_string(char *s)
{
int len = strlen(s);
int i;
while (i <= len)
{
_putchar(s[i]);
i--;
}
_putchar('\n');
}
