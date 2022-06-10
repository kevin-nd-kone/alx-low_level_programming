#include "main.h"

/**
 * print_square - function that print numbe.
 *
 *@n : int parameter
 *
 * Return: void.
 */
void print_square(int n)
{
int i;
int j;
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
_putchar("#");
}
_putchar("\n");
}
_putchar('\n');
}
