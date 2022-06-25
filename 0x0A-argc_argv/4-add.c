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
int i, sum = 0;
int isError = 0;
char error[] = "Error";

if (argc > 1)
{
for (i = 1; i < argc; i++)
{
if (*argv[i] >= '0' && *argv[i] <= '9')
{
sum += atoi(argv[i]);
}
else
{
isError = 1;
break;
}
}
}
else
{
printf("%d\n", argc - 1);
return (0);
}
if (isError == 0)
{
printf("%d\n", sum);
return (0);
}
else
{
printf("%s\n", error);
return (1);
}
}
