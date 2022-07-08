#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_all - function that print all thing passed in param
 *
 * @format: passed param type
 * Return: Nothing
 */

void print_all(const char *const format, ...)
{
va_list args;
unsigned int i = 0;
char *c;

va_start(args, format);
while (format && format[i])
{
switch (format[i++])
{
case 'c':
printf("%c", va_arg(args, int));
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", va_arg(args, double));
break;
case 's':
c = va_arg(args, char *);
printf("%s", c != NULL ? c : "(nil)");
break;
default:
continue;
}
if (format[i])
printf(", ");
}
printf("\n");
}
