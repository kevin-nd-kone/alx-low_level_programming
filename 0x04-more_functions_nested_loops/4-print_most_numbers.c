#include "main.h"

/**
 * print_numbers - function that print number for 0 - 9 without 2 and 4.
 *
 *
 *
 * Return: void.
 */
void print_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
if (i != 2 || i != 4)
{
printchar(i + '0');
}
}
_putchar('\n');
}
