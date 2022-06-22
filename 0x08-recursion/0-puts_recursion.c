#include "main.h"
#include <string.h>
/**
*_puts_recursion - print a string
*
*@s : char param
*
*/

void _puts_recursion(char *s)
{
int len = strlen(s);
int i;
for (i = 0; i < len; i++)
{
_putchar(s[i]);
}
_putchar('\n');
}
