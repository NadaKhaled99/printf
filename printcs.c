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
if (format && ptr)
	{
	if (format == 'c')
		counter = printchar(ptr, counter);
	else if (format == 's')
		counter = printstring(ptr, counter);
	else if (format == '%')
		counter = printpercentage(counter);
	else if ((format == 'd') || (format == 'i'))
		counter = printdigit(ptr, counter);
	else if (format == 'b' || format == 'o' || format == 'x' || format == 'X')
		counter = printbase(format, ptr, counter);
	else if (format == 'u')
		counter = printunsign(ptr, counter);
	else if (format == 'S')
		counter = printString(ptr, counter);
	else if (format == 'p')
		counter = printpointer(ptr, counter);
	else if (format == 'r')
		counter = printreversed(ptr, counter);
	else if (format == 'R')
		counter = printrot(ptr, counter);
	else
		counter = printdefault(format, counter);
	return (counter);
	}
	return (-1);
}
