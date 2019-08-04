#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
  int len;
  int len2;
  unsigned int ui;
  void *addr;

  len = _printf("Let's try to printf a simple sentence.\n");
  len2 = printf("Let's try to printf a simple sentence.\n");
  ui = (unsigned int)INT_MAX + 1024;
  addr = (void *)0x7ffe637541f0;
  _printf("Length:[%d, %i]\n", len, len);
  printf("Length:[%d, %i]\n", len2, len2);
  len = _printf("Negative:[%d]\n", -762534);
  len2 = printf("Negative:[%d]\n", -762534);
  _printf("Length:[%d, %i]\n", len, len);
  printf("Length:[%d, %i]\n", len2, len2);
  len = _printf("Unsigned:[%u]\n", ui);
  len2 = printf("Unsigned:[%u]\n", ui);
  _printf("Length:[%d, %i]\n", len, len);
  printf("Length:[%d, %i]\n", len2, len2);
  len = _printf("Unsigned octal:[%o]\n", ui);
  len2 = printf("Unsigned octal:[%o]\n", ui);
  _printf("Length:[%d, %i]\n", len, len);
  printf("Length:[%d, %i]\n", len2, len2);
  len = _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
  len2 = printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
  _printf("Length:[%d, %i]\n", len, len);
  printf("Length:[%d, %i]\n", len2, len2);
  len = _printf("Character:[%c]\n", 'H');
  len2 = printf("Character:[%c]\n", 'H');
  _printf("Length:[%d, %i]\n", len, len);
  printf("Length:[%d, %i]\n", len2, len2);
  len = _printf("String:[%s]\n", "I am a string !");
  len2 = printf("String:[%s]\n", "I am a string !");
  _printf("Length:[%d, %i]\n", len, len);
  printf("Length:[%d, %i]\n", len2, len2);
  len = _printf("Address:[%p]\n", addr);
  len2 = printf("Address:[%p]\n", addr);
  _printf("Length:[%d, %i]\n", len, len);
  printf("Length:[%d, %i]\n", len2, len2);
  len = _printf("Percent:[%%]\n");
  len2 = printf("Percent:[%%]\n");
  _printf("Length:[%d, %i]\n", len, len);
  printf("Length:[%d, %i]\n", len2, len2);
  len = _printf("Unknown:[%r]\n", "The best _printf() ever!");
  len2 = printf("Unknown:[%s]\n", "The best _printf() ever!");
  _printf("Length:[%d, %i]\n", len, len);
  printf("Length:[%d, %i]\n", len2, len2);
  len = _printf("Binary:[%b]\n", 55);
  len2 = printf("Binary:[%s]\n", "110111");
  _printf("Length:[%d, %i]\n", len, len);
  printf("Length:[%d, %i]\n", len2, len2);
  len = _printf("rot13:[%R]\n", "Hello Hellberton!");
  len2 = printf("rot13:[%s]\n", "Hello Hellberton!");
  _printf("Length:[%d, %i]\n", len, len);
  printf("Length:[%d, %i]\n", len2, len2);
  len = _printf("%c\n", 'S');
  len2 = printf("%c\n", 'S');
  _printf("Length:[%d, %i]\n", len, len);
  printf("Length:[%d, %i]\n", len2, len2);
  len = _printf("%u\n", 1024);
  len2 = printf("%u\n", 1024);
  _printf("Length:[%d, %i]\n", len, len);
  printf("Length:[%d, %i]\n", len2, len2);
  len = _printf("%s", "This sentence is retrieved from va_args!\n");
  len2 = printf("%s", "This sentence is retrieved from va_args!\n");
  _printf("Length:[%d, %i]\n", len, len);
  printf("Length:[%d, %i]\n", len2, len2);
  len = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
  len2 = printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
  _printf("Length:[%d, %i]\n", len, len);
  printf("Length:[%d, %i]\n", len2, len2);

  return (0);
}
