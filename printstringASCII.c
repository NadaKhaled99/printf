#include "main.h"
/**
*printstringASCII-functn to print string with non printable
*@ptr:input pointer
*@counter:input integer
*Return:counter
*/
int printstringASCII(va_list ptr, int counter)
{
char *str = va_arg(ptr, char*);
if (str == NULL)
{
str = "(null)";
}
for (int u = 0; str[u] != '\0'; u++)
{
if (str[u] < 32 || str[u] >= 127)
{
_putchar('\\');
_putchar('x');
_putchar((str[u] >> 4) + '0');
_putchar((str[u] & 0xF) + ((str[u] & 0xF) < 10 ? '0' : 'A' - 10));
counter += 4;
}
else
{
_putchar(str[u]);
counter++;
}
}
}
