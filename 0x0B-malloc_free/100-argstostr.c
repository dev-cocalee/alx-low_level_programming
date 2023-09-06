#include "main.h"


/**
 * argstostr - concatenates all arguments of the program
 * @ac: number of arguments passed to the functions
 * @av: array of arguments to argstostr
 * Return: pointer to the new string if successful, else NULL
*/
char *argstostr(int ac, char **av)
{
int i = 0, j = 0, len = 0, in = 0;
char *new_str;

/*check if the arguments are NULL*/
if (ac == 0 || av == NULL)
return (NULL);

for ( ; i < ac; i++)
{
j = 0;
while (av[i][j] != '\0')
len++, j++;
}
new_str = (char *)malloc((len *sizeof(char)) + ac + 1);

if (new_str == NULL)
{
free(new_str);
return (NULL);
}

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
new_str[in] = av[i][j];
in++;
}
new_str[in] = '\n';
in += 1;
}
return (new_str);
}
