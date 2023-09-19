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

/**
*printpointer- functn to print pointer
*@ptr:input pointer
*@counter: input integer
*Return: counter
*/
int printpointer(va_list ptr, int counter)
{
unsigned long int pt = va_arg(ptr, unsigned long int);
int k = 0;
char L_array[] = "0123456789abcdef";
char tmp[16];

if (pt == 0)
{
_putchar('(');
_putchar('n');
_putchar('i');
_putchar('l');
_putchar(')');
counter = counter + 5;
}
else
{
_putchar('0');
_putchar('x');
counter = counter + 2;
while (pt / 16)
{
tmp[k++] = L_array[pt % 16];
pt /= 16;
}
tmp[k] = L_array[pt % 16];
while (k >= 0)
{
_putchar(tmp[k]);
k--;
counter++;
}
}
return (counter);
}
