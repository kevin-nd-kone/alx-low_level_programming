#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function that calculate the sum of all given params
 *
 * @n: param unsigned integer
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int res = 0;
unsigned int i;
va_list arg;

va_start(arg, n);

if (n == 0)
return (0);
for (i = 0; i < n; i++)
{
res += va_arg(arg, unsigned int);
}
return (res);
}
