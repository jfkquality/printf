#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _isdigit(int c);
int _strlen(char *);
int _puts(char *w);
int print_rev(char *s);
int _putchar(char c);
int rot13(char *str);
char get_spec(char);
int switch_help(char spec, va_list list);
int _printf(const char *format, ...);
int print_int(int n);
int print_bin(unsigned int n);
int print_oct(unsigned int n);
int print_hex(unsigned int n);
int print_HEX(unsigned int n);
int print_unsign(unsigned int);
unsigned long int print_addr(unsigned long int);
#endif
