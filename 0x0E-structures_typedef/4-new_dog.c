#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @arr: array to be counted
 * Return: length of arr
*/
int _strlen(char *arr)
{
int i = 0;
while (arr[i])
i++;
return (i);
}

/**
 * _strcpy - copies src to dest
 * @dest: destination
 * @src: source
 * Return: dest
*/
char *_strcpy(char *dest, char *src)
{
int i = 0;
for ( ; src[i]; i++)
dest[i] = src[i];
dest[i] = '\0';
return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 * Return: new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
int len = 0;
dog_t *newdoggy;

if (age < 0 || name == NULL || owner == NULL)
return (NULL);

newdoggy = (dog_t *)malloc(sizeof(dog_t));
if (newdoggy == NULL)
return (NULL);

len = _strlen(owner);
newdoggy->owner = (char *)malloc((len *sizeof(char)));
if (newdoggy->owner == NULL)
{
free(newdoggy->name);
free(newdoggy);
return (NULL);
}

newdoggy->owner = _strcpy(newdoggy->owner, owner);

len = _strlen(name);
newdoggy->name = (char *)malloc((len *sizeof(char)));
if (newdoggy->name == NULL)
{
free(newdoggy->owner);
free(newdoggy);
return (NULL);
}

newdoggy->name = _strcpy(newdoggy->name, name);
newdoggy->age = age;
return (newdoggy);
}
