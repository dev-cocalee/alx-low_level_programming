#include "main.h"

/**
 * buf_creator_aka_therock - Allocates 1024 bytes for a buf.
 * @fp: The name of the file buf is storing chars for.
 * Return: A pointer to the newly-allocated buf.
 */
char *buf_creator_aka_therock(char *fp)
{
char *buf;

buf = (char *)malloc(sizeof(char) * 1024);

if (buf == NULL)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", fp);
exit(99);
}

return (buf);
}

/**
 * file_closer - literally a file closer
 * @fd: file descriptor argument
 */
void file_closer(int fd)
{
int i = 0;

i = close(fd);

if (i == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}}

/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0 upon successful yada yada
 */
int main(int argc, char *argv[])
{
int src, dest, r, w;
char *buf;

if (argc != 3) /*condition is ccording to instructions*/
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

buf = buf_creator_aka_therock(argv[2]);
src = open(argv[1], O_RDONLY);
r = read(src, buf, 1024);
dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

while (r > 0) 
{
if (src == -1 || r == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read from file %s\n", argv[1]);
free(buf);
exit(98); }

w = write(dest, buf, r);
if (dest == -1 || w == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", argv[2]);
free(buf);
exit(99);
}

r = read(src, buf, 1024);
dest = open(argv[2], O_WRONLY | O_APPEND);

}

free(buf);
file_closer(src);
file_closer(dest);

return (0);
}
