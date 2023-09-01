#include "main.h"

/**
 * _strlen_recursion - returns the length of s
 * @s: pointer to the string to be measured
 * Return: length of s
*/
int _strlen_recursion(char *s)
{
int len = 0;
if (*s != '\0')
{
len += 1;
len += _strlen_recursion(s + 1);
}
return (len); }
