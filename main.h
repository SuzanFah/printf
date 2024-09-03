#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int print_char(char c);
int print_string(char *str);
int print_number(int n);
int print_binary(unsigned int n);
int print_unsigned(unsigned int n);
int print_octal(unsigned int n);
int print_hex(unsigned int n, int uppercase);
int print_pointer(void *p);
int print_reversed_string(char *str);
int print_rot13_string(char *str);
int handle_specifier(char specifier, va_list args, char *buffer, int *buffer_index);
int print_char(va_list args, char *buffer, int *buffer_index);
int print_string(va_list args, char *buffer, int *buffer_index);

#endif /* MAIN_H */
