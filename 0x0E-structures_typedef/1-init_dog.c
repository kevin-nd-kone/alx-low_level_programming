#include <stdio.h>
#include "dog.h"
#include "main.h"
/**
 * init_dog - void that init a dog struct
 *
 * @d: dog struct pointer
 * @name: char param
 * @age: flot param
 * @owner: char parm
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}