#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>


/**
 * struct dog - creates a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
*/
struct  dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - new instance of struct dog
*/
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
char *_strcpy(char *dest, char *src);
int _strlen(char *arr);
void free_dog(dog_t *d);

#endif /*DOG_H*/
