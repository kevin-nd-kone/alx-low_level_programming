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
printf("%c", c);
}
printf("\n");
return (0);
}
