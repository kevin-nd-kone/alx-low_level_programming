#include "main.h"
#include <stdlib.h>

/**
 * *_memoryset - fills memory with a constant byte.
 * @cons: pointer to put the constant
 * @c: constant
 * @n: max bytes to use
 * Return: s
 */

char *_memoryset(char *cons, char c, unsigned int n)
{
    char *ptr = cons;

    while (n--)
        *cons++ = c;

    return (ptr);
}

/**
 * *_calloc - allocates memory for an array, using malloc
 * @memo: array length
 * @size: size of each element
 * Return: pointer
 */

void *_calloc(unsigned int memo, unsigned int size)
{
    void *m;

    if (size == 0 || memo == 0)
        return (NULL);

    m = malloc(memo * size);

    if (m == 0)
        return (NULL);

    _memset(m, 0, memo * size);

    return (m);
}