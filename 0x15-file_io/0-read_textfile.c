#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POSIX stdout.
 * @filename: pointer to filename
 * @letters: number of letters it should read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t r, w, o; /*read, write nd open*/
char *buf;

if (filename == NULL)
return (0);

buf = (char*)malloc(sizeof(char) * letters);
if (buf ==  NULL)
return (0);

o = open(filename, O_RDONLY);
r = read(o, buf, letters);
w = write(STDOUT_FILENO, buf, r);

if (o == -1 || r == -1 || w == -1 || w != r)
{
free(buf);
return (0);
}

free(buf);
close(o);

return (w);
}
