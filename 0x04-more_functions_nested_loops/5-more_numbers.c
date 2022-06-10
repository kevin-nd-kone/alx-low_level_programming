#include "main.h"

/**
 * more_numbers - function that print number for 0 - 9.
 *
 *
 *
 * Return: void.
 */
void more_numbers(void)
{
int i;
int j = 0;
while (j <= 10)
{
for (i = 0; i <= 14; i++)
{
_putchar(i + '0');
}
j++;
_putchar('\n');
}
}
