#include "_putchar.h"
#include "main.h"
#include <string.h>
/**
 * main - Program entry point
 *
 *Return:  0 on success. Error code otherwise
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
