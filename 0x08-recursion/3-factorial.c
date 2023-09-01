#include "main.h"

/**
* factorial - calculates the factorial of a number
* @n: number whose factorial is to be calculated
* Return: the factorial of n
*/

int factorial(int n)
{
int val;

if (n == 0)
return (1);
else if (n < 0)
return (-1);

val = factorial(n - 1);
return (val *n); }
