#include <stdio.h>
/**
 * struct dog - define a struct dog
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Description: a dog struct to store dog properties
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
