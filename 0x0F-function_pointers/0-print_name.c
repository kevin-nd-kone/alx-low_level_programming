#include <stdio.h>
#include "function_pointer.h"

/**
 * print_name - function that print name
 *
 * @name: param char
 * @f: param function pointer
 *
 */

void print_name(char *name, void (*f)(char *))
{
if (f)
f(name);
}
