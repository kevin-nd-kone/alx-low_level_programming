#include <stdio.h>
#include "dog.h"
/**
 * new_dog - function that create dog
 *
 * @name: char param
 * @age: float param
 * @owner: char parm
 * Return: pointer to dog struct dog_t*
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
dog = malloc(sizeof(struct dog));
if (dog == NULL)
return (NULL);
dog->name = name;
dog->age = age;
dog->owner = owner;
return (dog);
}
