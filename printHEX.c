#include "main.h"
/**
*printstring - functn to print string
*@ptr: input pointer
*@counter: input integer
*Return: counter
*/
int printHex(va_list ptr, int counter)
{
char *str = va_arg(ptr, char*);
if (str)
{
for (int j = 0; str[j]; j++)
{
if ((str[j] >= 32 && str[j] < 127) || str[j] < 0 || str[j] >= 127)
{
_putchar(str[j]);
counter++;
}
else
{
printf("\\x%02X", (unsigned char)str[j]);
counter = counter + 4;
}
}
}
else
{
counter++;
}
va_end(ptr);
return (counter);
}
/**
*printhex-functn to print Hex string
*@ptr: input pointer
*@base:paramter used to convert the integer into string
*@hexcase:check the value of the paramter
*@counter: input integer
*Return: counter
*/
int printhex(va_list ptr, int base, int counter, int hexcase)
{
int j = 0;
int number = va_arg(ptr, int);
int tmp[100];
while (number != 0)
{
int rm = number % base;
tmp[j++] = (rm < 10) ? rm + '0' : (hexcase ? rm + 'A' - 10 : rm  + 'a' - 10);
number = number / base;
}
if (j == 0)
{
tmp[j++] = '0';
}
while (j > 0)
{
_putchar(tmp[--j];
counter++;
}
return (counter);
}
