#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_rev - print rev string
 *@s : param srting
 * Return: Always 0.
 */
void print_rev(char *s)
{
int len = strlen(s);
for (int i = len; i <= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
