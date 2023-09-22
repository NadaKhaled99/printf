#include "main.h"
/**
 * printchar - functn to print char
 * @ptr: input pointer
 * @counter: input integer
 *
 * Return: counter
 */
int printchar(va_list ptr, int counter)
{
char str;
str = va_arg(ptr, int);
_putchar(str);
counter++;
return (counter);
}
/**
 * printpercentage - functn to print %
 * @counter: input integer
 *
 * Return: counter
 */
int printpercentage(int counter)
{
_putchar('%');
counter++;
return (counter);
}

/**
 * printdefault - functn to print default
 * @format: input character
 * @counter: input integer
 *
 * Return: counter
 */
int printdefault(const char *format, int counter)
{
_putchar('%');
_putchar(*format);
counter += 2;
return (counter);
}
