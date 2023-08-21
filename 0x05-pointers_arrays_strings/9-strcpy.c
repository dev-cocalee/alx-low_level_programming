#include "main.h"

/**
 * _strcpy - copies a function from src to dest's buffer
 * @dest: destination
 * @src: source
 * Return: pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
int i = 0;

for ( ; src[i]; i++)
dest[i] = src[i];
dest[i] = '\0';
return (dest);
}
