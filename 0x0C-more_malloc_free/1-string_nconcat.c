#include "main.h"

/**
* string_nconcat - Concatenates two strings using at
* most an inputted number of bytes.
* @s1: first string.
* @s2: second string.
* @n: number of bytes in s2 to concatenate to s1.
* Return: NULL If the function fails to return a pointer to the
* concatenated space in memory else a pointer to blah blah
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *newString;
unsigned int len = n, in; /*in for index*/

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

for (in = 0; s1[in]; in++)
len++;
newString = malloc(sizeof(char) * (len + 1));

if (newString == NULL)
return (NULL);

len = 0;

for (in = 0; s1[in]; in++)
newString[len++] = s1[in];

for (in = 0; s2[in] && in < n; in++)
newString[len++] = s2[in];

newString[len] = '\0';

return (newString); }
