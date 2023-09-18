#include "main.h"
/**
*printpointer- functn to print pointer
*@ptr:input pointer
*@counter: input integer
*Return: counter
*/
int printpointer(va_list ptr, int counter)
{
void *ptr = va_arg(ptr, void*);
char digit_array[] = "0123456789abcdef";
_putchar('0');
_putchar('x');
counter += counter;
for (int d = sizeof(void *) * 2 - 1; d >= 0; d--)
{
_putchar(digit_array[((unsigned long)ptr >> (d * 4)) & 0xf]);
counter++;
}
return (counter);
}
