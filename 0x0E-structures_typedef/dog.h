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
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
