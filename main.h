#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct print
{
char *print;
int (*f)(va_list);
} print_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list c);
int print_str(va_list s);
int print_dec(va_list d);
int print_int(va_list i);

#endif
