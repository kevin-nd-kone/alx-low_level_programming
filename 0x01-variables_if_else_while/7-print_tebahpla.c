#include <stdio.h>

/**
 * main - Program entry point
 *
 *Return:  0 on success. Error code otherwise
 */
int main(void)
{
char c;
for (c = 'z'; c >= 'a'; --c)
{
putchar(c);
}
printf("\n");
return (0);
}
