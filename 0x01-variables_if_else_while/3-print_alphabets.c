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
printf("%c", c);
}
for (l = 'A'; l <= 'Z'; ++l)
{
printf("%c", l);
}
printf("\n");
return (0);
}