#include "main.h"
/**
 * printcs - functn to print c, s, %
 * @format: input character
 * @ptr: input pointer
 * @counter: input integer
 *
 * Return: counter
 */
int printcs(char format, va_list ptr, int counter)
{
switch (format)
{
case 'c':
_putchar(va_arg(ptr, int));
counter++;
break;
case 's':
counter = printstring(ptr, counter);
break;
case '%':
_putchar('%');
counter++;
break;
case 'd':
case 'i':
counter = printdigit(ptr, counter);
break;
case 'b':
case 'o':
case 'x':
case 'X':
counter = printbase(format, ptr, counter);
break;
case 'u':
counter = printunsign(ptr, counter);
break;
default:
_putchar('%');
_putchar(format);
counter += 2;
break;
}
return (counter);
}
