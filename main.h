#ifndef PRINT
#define PRINT

int _printf(const char *format, ...);
int _print_strin(char *c, int *s, int *i);
int _putchar(char c);
int _print_number(long int c);
int count_size(long int c);
int _bool(const char *format, char *spec, int i);
void _print(int *l, int *n, int *s, int i, long int c);
void _return(long int c, int *i, int *d);
void _print_num(long int y, int (*f)(long int), int *b, int *g);
long int positive(long int h);
#include <unistd.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>

#endif /*PRINT*/
