#include <stdio.h>

/**
 * main - Program entry point
 *
 *Return:  0 on success. Error code otherwise
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; ++c)
{
if (c != 'q' && c != 'e')
{
putchar(c);
}
}
putchar("\n");
return (0);
}
