#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * strtow - splits a string into words
 * @str: string to be split
 * Return: pointer to newly allocated space for array of words upon success
 * else NULL
*/
char **strtow(char *str)
{
int i = 0,  j = 0, k = 0, l = 0, m = 0, in = 0;
char **new_str;
if (str == NULL)
return (NULL);

while (str[i] != '\0')
{
if (str[i] != 32)
i++;
if (str[i] != 32 && str[i - 1] == 32)
l++;
}

new_str = (char **)malloc(i *sizeof(char) + l);

if (new_str == NULL)
return (NULL);
else
{
for (i = 0; i < l; i++)
{
m = 0;
for ( ; m == 0; j++)
{
if (str[j] != 32 && str[j - 1] == 32)
{
k = j;
for ( ; str[j + 1] != 32; j++)
m++;
}
}
new_str[i] = (char *)malloc((m + 1) * sizeof(char) + 1);
if (new_str[i] == NULL)
return (NULL);
else
for ( ; str[k] != 32 && str[k] != '\0'; k++, in++)
new_str[i][in] = str[k];
}
return (new_str);
}
}
