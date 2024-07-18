#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void multiply(char *num1, char *num2);
void validate_and_print_error(int argc, char *argv[]);
void print_error(void);
void int_and_mult(char *num1, char *num2, int *result, int len1, int len2);
void print_result(int *result, int len);

#endif
