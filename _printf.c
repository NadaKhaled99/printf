#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
*_printf-printf function that customized
*@format:format string
*Return:no. of characters which is printed
*/
int _printf(const char *format, ...)
{
va_list ptr;
int ch;
int len = 0;    
va_start(ptr, format);
while (format && format[len])
{
if (format[len] == '%')
{
len++;
if (format[len] == '%')
{
putchar('%');
ch++;
len++;
}
ch = ch + formattedargument(format, len, ptr);
}
else
{
ch++;
putchar(format[len]);
}
len++;
}
va_end(ptr);
return ch;
}
