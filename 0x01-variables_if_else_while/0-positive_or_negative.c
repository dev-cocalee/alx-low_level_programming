/* more headers goes there */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* betty style doc for function main goes there */
/**
 * main - code written by Mr Barbier, to be modfied by The students
 * Return: 0
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n < 0)
printf("%d is negative\n", n);
else if (n > 0)
printf("%d is positive\n", n);
else
printf("%d is zero\n", n);
return (0);
}
