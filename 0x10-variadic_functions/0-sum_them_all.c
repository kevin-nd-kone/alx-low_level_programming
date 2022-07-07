#include <iostream>
#include <cstdarg>
#include <stdio.h>
/**
 * sum_them_all - function that calculate the sum of all given params
 *
 * @n: param unsigned integer
 * @...: other param
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
int res = 0;
std::va_lits args;
va_start(args, count);
for (int i = 0; i < count; ++i)
{
res += va_arg(args, int);
}
va_end(args);
return (res);
}
