#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <limits.h>
#include <sys/types.h>

int _putchar(char c);
int _min(ssize_t a, ssize_t b);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif /*MAIN_H*/
