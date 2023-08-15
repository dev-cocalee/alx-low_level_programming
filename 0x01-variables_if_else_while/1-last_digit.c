#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - still some code by Mr Barbier
 * Return: 0
*/
int main(void)
{
int n, dig;
srand(time(0));
n = rand() - RAND_MAX / 2;
dig = n % 10;
/* your code goes there */
if (dig > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, dig);
if (dig == 0)
printf("Last digit of %d is %d and is  0\n", n, dig);
if (dig < 6 && dig != 0)
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, dig);
return (0);
}
