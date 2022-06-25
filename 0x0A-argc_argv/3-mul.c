#include <stdlib.h>
#include <stdio.h>

/**
 *main - main entry of program
 *
 *@argc : number of argument
 *
 *@argv : array of argument
 *
 *Return: alway 1 if erro otherwire 0
 */

int main(int argc, char *argv[])
{
if (!(argc > 2))
{
char error[] = "Error";
printf("%s\n", error);
return (1);
}
int res;
res = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", res);
return (0);
}
