#include "main.h"

/**
 * main - prints the numbers from 1 to 100 but with modifications:
 * multiples of 3 are replaced with Fizz, Buzz applies for multiples
 * of 5, while FizzBuzz is printed into place of numbers which
 * are multiples of 3 and 5.
 * Return: 0 upon successful compilation.
 */
int main(void)
{
int i = 1;
for ( ; i < 101; i++)
{
if ((i % 3 == 0) && (i % 5 != 0))
printf("Fizz ");
else if ((i % 5 == 0) && (i % 3 != 0))
printf("Buzz ");
else if ((i % 3 == 0) && (i % 5 == 0))
printf("FizzBuzz ");
else
printf("%d ", i);
}
_putchar('\n');
return (0);
}
