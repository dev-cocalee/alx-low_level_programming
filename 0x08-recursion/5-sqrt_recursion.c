#include "main.h"


/**
* _sqrt_recursion - uses the checks for tthe signedness of the return value
* of the _sqrt function
* @n: number to be toyed with
* Return: the square root of n
*/
int _sqrt_recursion(int n)
{
if (n == 0 || n == 1)
return (n);
return (sqrt_calculator(0, n));
}

/**
 * sqrt_calculator - returns the square root of a number
 * @n: test number
 * @z: squared number
 * Return: natural or unnatural square root of n
 */
int sqrt_calculator(int n, int z)
{
	if (n > z / 2)
		return (-1);
	else if (n * n == z)
		return (n);
	return (sqrt_calculator(n + 1, z));
}
