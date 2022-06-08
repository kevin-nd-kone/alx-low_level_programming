#include "main.h"
#include <string.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
char text[] = "_putchar";
for (int i = 0; i < strlen(text) ; i++)
{
_putchar(text[i]);
}
putchar('\n');
return (0);
}
