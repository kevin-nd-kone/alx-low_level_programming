#include <stdlib.h>
#include <stdio.h>

/**
 *main - main entry of program
 *
 *@argc : number of argument
 *
 *@argv : array of argument
 *
 *Return: alway 0
 */

int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
