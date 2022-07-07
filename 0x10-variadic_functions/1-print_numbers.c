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
int num;
va_list numbers;

va_start(numbers, n);
for (i = 0; i < n; i++)
{
num = va_arg(numbers, int);
printf("%d", num);
if (i < (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(numbers);
}
