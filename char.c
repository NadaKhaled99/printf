#include "main.h"
/**
 * printchar - functn to print char
 * @ptr: input pointer
 * @counter: input integer
 *
 * Return: counter
 */
int printchar(va_list ptr, int counter)
{
char str;
str = va_arg(ptr, int);
_putchar(str);
counter++;
return (counter);
}
