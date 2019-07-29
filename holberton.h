#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void print_int(int n);
int _isdigit(int c);
int _strlen(char *);
void _puts(char *w);
void print_rev(char *s);
int _putchar(char c);
char *rot13(char *str);
char get_spec(char letter);
int switch_help(char spec, va_list list);
int _printf(const char *format, ...);
void print_int(int n);
#endif
