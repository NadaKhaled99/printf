#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stddef.h>
#define BUFFER_SIZE 1024
#define flagminus 1
#define flagplus 2
#define flagzero 4
#define flaghash 8
#define flagspace 16
int _putchar(char c);
int _strlen(char *s);
int _printf(const char *format, ...);
int printslash(char format, int counter);
int printcs(char format, va_list ptr, int counter);
int printchar(va_list ptr, int counter);
int printstring(va_list ptr, int counter);
int printdigit(va_list ptr, int counter);
int printunsign(va_list ptr, int counter);
int printbase(char format, va_list ptr, int counter);
int printbze(va_list ptr, int base, int counter);
int printhex(va_list ptr, int base, int counter, int hexcase);
int printString(va_list ptr, int counter);
int printpointer(va_list ptr, int counter);
int printreversed(va_list ptr, int counter);
int printrot(va_list ptr, int counter);
int printpercentage(int counter);
int printFlag(const char *format, int *z);
int printdefault(char format, int counter);
#endif
