#include "main.h"
/**
*printpointer- functn to print pointer
*@ptr:input pointer
*@counter: input integer
*Return: counter
*/
int printpointer(va_list ptr, int counter)
{
int f;
char L_array[] = "0123456789abcdef";
_putchar('0');
_putchar('x');
counter += counter;
for (f = sizeof(void *) * 2 - 1; f >= 0; f--)
{
_putchar(L_array[((unsigned long)ptr >> (f * 4)) & 0xf]);
counter++;
}
return (counter);
}
