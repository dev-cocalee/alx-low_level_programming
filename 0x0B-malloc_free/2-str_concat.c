#include "main.h"

/**
 * _strlen - returns the i of a string
 * @s: pointer to a string of characters
 * Return: i of the string upon success, else 0
*/
int _strlen(char *s)
{
int i = 0;
while (s[i])
i++;
return (i);
}

/**
 * str_concat - concatenates 2 strings
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 * Return: pointer to a newly allocated space containing the result of s1+s2
*/
char *str_concat(char *s1, char *s2)
{
int a = 0, str_length, c;
char *new_s;


if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

str_length = _strlen(s1) + _strlen(s2);
new_s = (char *)malloc((str_length *sizeof(char)) + 1);


if (new_s == NULL)
return (NULL);


while (s1[a] != '\0')
{
new_s[a] = s1[a];
a++;
}
a = _strlen(s1);
for (c = 0; s2[c] != '\0'; c++, a++)
new_s[a] = s2[c];
return (new_s);
}
