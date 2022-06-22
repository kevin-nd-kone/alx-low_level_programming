#include "main.h"

/**
 *_print_rev_recursion - print rev string
 *
 *
 *@s : param string
 *
 */

void _print_rev_recursion(char *s)
{
	int i;

	for (i = 0 ; s[i]; i++)
	{}
	for (; s[i - 1]; i--)
	{
		_putchar(s[i - 1]);
	}
	_putchar('\n');
}
