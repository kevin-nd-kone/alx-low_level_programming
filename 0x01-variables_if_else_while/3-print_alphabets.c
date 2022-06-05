#include <stdio.h>

/**
 * main - Program entry point
 *
 *Return:  0 on success. Error code otherwise
 */
int main(void)
{
char c;
char l;
for (c = 'a'; c <= 'z'; ++c)
{
putchar("%c", c);
}
for (l = 'A'; l <= 'Z'; ++l)
{
putchar("%c", l);
}
putchar("\n");
return (0);
}
