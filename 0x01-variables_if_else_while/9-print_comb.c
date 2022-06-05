#include <stdio.h>

/**
 * main - Program entry point
 *
 * Return: 0 success. Error code otherwise
 */
int main(void)
{
int n;
for (n = 0; n < 10; n++)
{
putchar(n % 10 + '0');
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
