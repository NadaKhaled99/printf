#include "main.h"
/**
 * printflags - functn to print bos, space, hash, 0, left
 * @format: input character
 * @j: input pointer for format
 * @ptr: input pointer
 * @counter: input integer
 *
 * Return: counter
 */
int printflags(const char *format, int *j, va_list ptr, int counter)
{
if (*format == '+' || *format == ' ')
counter = printpospace(format, j, ptr, counter);
else if (*format == '#')
counter = printhash(format, j, ptr, counter);
return (counter);
}
/**
 * printpospace - functn to print bos, space.
 * @format: input character
 * @j: input pointer for format
 * @ptr: input pointer
 * @counter: input integer
 *
 * Return: counter
 */
int printpospace(const char *format, int *j, va_list ptr, int counter)
{
int n = va_arg(ptr, int);
if (*format == ' ')
{
_putchar(' ');
counter++;
}
if (*format == '+')
{
if (n >= 0)
{
_putchar('+');
counter++;
}
}
format++;
*j = (*j) + 1;
if ((*format == 'd') || (*format == 'i'))
counter = printdigit(n, counter);
return (counter);
}
/**
 * printhash - functn to print hash.
 * @format: input character
 * @j: input pointer for format
 * @ptr: input pointer
 * @counter: input integer
 *
 * Return: counter
 */
int printhash(const char *format, int *j, va_list ptr, int counter)
{
format++;
*j = (*j) + 1;
if (*format == 'o')
{
_putchar('0');
counter++;
}
if (*format == 'x')
{
_putchar('0');
_putchar('x');
counter = counter + 2;
}
if (*format == 'X')
{
_putchar('0');
_putchar('X');
counter = counter + 2;
}
counter = printbase(format, ptr, counter);
return (counter);
}
