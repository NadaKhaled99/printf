#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <stdint.h>
#include <limits.h>
#define buffer 2024
int _printf(const char *format, ...);
int formattedargument(const char *format, int len, va_list ptr);
int number(int n);
int unsignedp(unsigned int n);
int octal(unsigned int n);
int hexadecimal(unsigned int n, int up);
int counter(unsigned int n);
int base(unsigned int n, int pase);
#endif
