#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * Return: 1 if c is a letter otherwise 0
*/
int _isalpha(int c)
{
if ((c < 123 && c > 96) || (c < 91 && c > 64))
return (1);
return (0);
}
