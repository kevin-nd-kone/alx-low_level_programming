#include <stdio.h>
#include "main.h"

/**
 * print_name - function that print name
 *
 * @name: param char
 * @f: param function pointer
 *
 */

void print(char *name);
void print_name(char *name, void (*f)(char *))
{
if (f)
f = &print;
f (name);
}


void print(char *name)
{
if (name)
printf("Hello, my name is %s", name);
}
