#include "main.h"


/**
 * _strdup - returns a pointer to a new duplicate of str
 * @str: pointer to the string to be duplicated
 * Return: pointer to duplicate of str if successful else NULL
*/
char *_strdup(char *str)
{
int i = 0, j = 0;
char *new_str;
if (str == NULL)
return (NULL);
while (str[i] != '\0')
i++;
new_str = (char *)malloc((i *sizeof(char)) + 1);
if (new_str == NULL)
return (NULL);
while (str[j] != '\0')
{
new_str[j] = str[j];
j++;
}
return (new_str);
}
