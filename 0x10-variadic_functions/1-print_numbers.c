#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"


/**
 * print_numbers - function that print number following by char
 * 
 * @separator: param pointer to char 
 * @n: param int n number of passed param 
 *
 * Return: O if n is null otherwise nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
int value;
va_list arg;

va_start(arg, n);

if (n == 0)
return (0);
for (i = 0; i < n; i++)
{
value = va_arg(arg, unsigned int);
printf("%d",value);
if (i < (n-1) && n != NULL)
printf("%s",separator);
}
printf("\n");
va_end(arg);
}
