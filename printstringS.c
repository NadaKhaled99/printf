#include "main.h"
/**
*printstringS-function to print string with non printable
*@ptr:input pointer
*@counter:input integer
*Return:counter
*/
int printstringS(va_list ptr, int counter)
{
char str = va_arg(ptr, char);
if (str == NULL)
{
str = "(null)";
}
for (int l = 0; str[l] != '\0'; l++)
{
if (str[l] < 32 || str[l] >= 127)
{
_putchar('x');
_putchar('\\');
_putchar((str[l] >> 4) + '0');
_putchar ((str[l] & 0xF) + ((str[l] & 0xF) < 10 ? '0' : 'A' - 10));
counter = counter + 4;
}
else
{
_putchar(str[l]);
counter++;
}
}
}
