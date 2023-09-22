#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stddef.h>
#define BUFFER_SIZE 1024
int _putchar(char c);
int _strlen(char *s);
int _printf(const char *format, ...);
int printslash(const char *format, int counter);
int printcs(const char *format, int *j, va_list ptr, int counter);
int printchar(va_list ptr, int counter);
int printstring(va_list ptr, int counter);
int printdigit(int n, int counter);
int printunsign(va_list ptr, int counter);
int printbase(const char *format, unsigned int n, int counter);
int printbze(unsigned int n, int base, int counter);
int printhex(unsigned int n, int base, int counter, int hexcase);
int printString(va_list ptr, int counter);
int printpointer(va_list ptr, int counter);
int printpercentage(int counter);
int printdefault(const char *format, int counter);
int printflags(const char *format, int *j, va_list ptr, int counter);
int printpospace(const char *format, int *j, va_list ptr, int counter);
int printhash(const char *format, int *j, va_list ptr, int counter);
int printleft(const char *format, int *j, va_list ptr, int counter);
int printzero(const char *format, int *j, va_list ptr, int counter);
int printreversed(va_list ptr, int counter);
int printrot(va_list ptr, int counter);
#endif
