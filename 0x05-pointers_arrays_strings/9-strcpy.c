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

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98];
    char *ptr;

    ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
    printf("%s", s1);
    printf("%s", ptr);
    return (0);
}
