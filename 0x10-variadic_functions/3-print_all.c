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
unsigned int i, l = sizeof format / sizeof format[0];
char *c;

var_start(args, format);
for (i = 0; i < l; i++)
{
switch (format[i])
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
}
}