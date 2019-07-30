#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

void print_int(int n);
int _isdigit(int c);
int _strlen(char *);
void _puts(char *w);
void print_rev(char *s);
int _putchar(char c);
int rot13(char *str);
char get_spec(char);
int switch_help(char spec, va_list list);
int _printf(const char *format, ...);
void print_int(int n);
void print_bin(int n);
void print_oct(unsigned int n);
void print_hex(unsigned int n);
void print_HEX(unsigned int n);
void print_unsigned(unsigned int);
void print_addr(void *address);
#endif
