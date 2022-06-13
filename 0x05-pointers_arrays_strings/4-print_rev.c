#include "main.h"
#include <string.h>
/**
 * print_rev - print rev string
 *@s : param srting
 * Return: Always 0.
 */

void print_rev(char *s)
{
int len = strlen(s);
int i = len;
for (int i = len; i <= 0; i--)
{
putchar(s[i]);
}
}
}
