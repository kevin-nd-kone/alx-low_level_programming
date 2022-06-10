#include "main.h"

/**
 * print_diagonal - function that print numbe.
 *
 *@n : int parameter
 *
 * Return: void.
 */
void print_diagonal(int n)
{
int i;
int j;
if (n > 0)
{
for (i = 1; i <= n; i++)
{
if (i == 1)
{
_putchar('\\');
}
else
{
_putchar('\n');
for (j = 1; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
}
}
}
_putchar('\n');
}
