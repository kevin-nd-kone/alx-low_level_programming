#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - Program entry point
 *
 *Return:  0 on success. Error code otherwise
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n % 10 > 5)
{
printf("Last digit of %d is %d and is greater than %d\n", n, n % 10, 5);
}
else if (n % 10 == 0)
{
printf("Last digit of %d is %d and is %d\n", n, n % 10, 0);
}
else if (n % 10 < 6 && n != 0)
{
printf("Last digit of %d is %d and is less than %d and not 0\n", n, n % 10, 6);
}
return (0);
}
