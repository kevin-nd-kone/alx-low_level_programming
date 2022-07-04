#include <stdio.h>
#include "dog.h"

/**
 * print_dog - void that print dog struct 
 * 
 * @d: struct dog pointer
 * 
 * Return: Nothing 
 */
void print_dog(struct dog *d)
{
if (d != NULL)
{
if (d->name != NULL)
{
printf("Name: %s", d->name);
}
else
{
printf("Name: (nil)");
}
if (d->age)
{
printf("Name: %s", d->age);
}
else
{
printf("Age: (nil)");
}
if (d->owner != NULL)
{
printf("Owner: %s", d->owner);
}
else
{
printf("Owner: (nil)");
}
}
}