#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function that calculate the sum of all given params
 *
 * @n: param unsigned integer
 * @...: other param
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int sum = 0;
unsigned int i;
va_list arguments;

va_start(arguments, n);

if (n == 0)
return (0);
for (i = 0; i < n; i++)
{
sum += va_arg(arguments, unsigned int);
}
return (sum);
}
