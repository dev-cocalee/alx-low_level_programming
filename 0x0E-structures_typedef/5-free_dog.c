#include "dog.h"

/**
 * free_dog - frees a dog.
 * @d: I don't know, I'll sha use it.
*/
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
}
free(d);
}
