#include "main.h"

/**
 * get_endianness - endianness checker.
 *
 * Return: 0 if biggess otherwise 1
 */
int get_endianness(void)
{
int value = 1;
char *c = (char *)&value;
if (*c)
{
return (1);
}
return (0);
}
