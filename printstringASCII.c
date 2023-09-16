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
str = "(null)";
for (int k = 0; str[k] != '\0'; k++)
{
if (str[k] < 32 || str[k] >= 127)
{
printf("\\x%02X", (unsigned char)str[k]);
}
else
{
_putchar(str[k]);
}
counter++;
}
return (counter);
}
