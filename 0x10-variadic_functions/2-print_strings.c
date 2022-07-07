#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_strings - function that print string
 *
 * @separator: param char string
 * @n: param int n
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list strings;
char *string;

va_start(strings, n);

for (i = 0; i < n; i++)
{
string = va_arg(strings, char *);
printf("%s", string != NULL ? string : "(nil)");
if (i < (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(strings);
}
