#include "main.h"

/**
 *swap_int - interger swapper
 *
 *@a : param int
 *@b : param int
 *
 *return - alway 0
 */

void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
