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
while ((*format != 'd') && (*format != 'i'))
{
if (*format == ' ')
{
if (n >= 0)
{
_putchar(' ');
counter++;
}
format++;
*j = (*j) + 1;
}
if (*format == '+')
{
if (n >= 0)
{
_putchar('+');
counter++;
}
format++;
*j = (*j) + 1;
if (*format == ' ')
{
format++;
*j = (*j) + 1;
}
}
}
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
unsigned int n = va_arg(ptr, unsigned int);
format++;
*j = (*j) + 1;
if (*format == 'o')
{
if (n > 0)
{
_putchar('0');
counter++;
}
}
if (*format == 'x')
{
if (n > 0)
{
_putchar('0');
_putchar('x');
counter = counter + 2;
}
}
if (*format == 'X')
{
if (n > 0)
{
_putchar('0');
_putchar('X');
counter = counter + 2;
}
}
counter = printbase(format, n, counter);
return (counter);
}
