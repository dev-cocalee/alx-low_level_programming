#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
char *buf_creator_aka_therock(char *fp); /*fp = file pointer*/
void file_closer(int fd);

#endif /* MAIN_H */
