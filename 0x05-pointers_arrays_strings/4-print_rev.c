#include "main.h"
/**
 * print_rev - prints a string ,in reverse
 * @s:string variable
 */
void print_rev(char *s)
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
