#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stddef.h>
int _putchar(char c);
int _printf(const char *format, ...);
int printslash(char format, va_list ptr, int counter);
int printcs(char format, va_list ptr, int counter);
int printstring(va_list ptr, int counter);
int printdigit(va_list ptr, int counter);
int printunsign(va_list ptr, int counter);
int printbase(char format, va_list ptr, int counter);
int printbze(va_list ptr, int base, int counter);
int printhex(va_list ptr, int base, int counter, int hexcase);
#endif
