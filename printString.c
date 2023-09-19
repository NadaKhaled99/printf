#include "main.h"
/**
*printString-function to print String with non printable
*@ptr:input pointer
*@counter:input integer
*Return:counter
*/
int printString(va_list ptr, int counter)
{
char *str = va_arg(ptr, char *);

if (str == NULL)
{
str = "(null)";
}
while (*str)
{
if (*str >= 32 && *str < 127)
{
_putchar(*str);
counter++;
}
else
{
_putchar('\\');
_putchar('x');
counter = counter + 2;
if (*str < 16)
{
_putchar('0');
counter++;
}
counter += _printf("%X", *str);
}
str++;
}
return (counter);
}
