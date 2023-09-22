#include "main.h"
/**
 * printcs - functn to print c, s, %
 * @format: input character
 * @j: input pointer format
 * @ptr: input pointer
 * @counter: input integer
 *
 * Return: counter
 */
int printcs(const char *format, int *j, va_list ptr, int counter)
{
if (format && ptr)
{
	int n;
	unsigned int m;

	if (*format == 'c')
		counter = printchar(ptr, counter);
	else if (*format == 's')
		counter = printstring(ptr, counter);
	else if (*format == '%')
		counter = printpercentage(counter);
	else if ((*format == 'd') || (*format == 'i'))
	{
		n = va_arg(ptr, int);
		counter = printdigit(n, counter);
	}
	else if (*format == 'b' || *format == 'o' || *format == 'x' || *format == 'X')
	{
		m = va_arg(ptr, unsigned int);
		counter = printbase(format, m, counter);
	}
	else if (*format == 'u')
		counter = printunsign(ptr, counter);
	else if (*format == 'S')
		counter = printString(ptr, counter);
	else if (*format == 'p')
		counter = printpointer(ptr, counter);
	else if (*format == 'r')
		counter = printreversed(ptr, counter);
	else if (*format == 'R')
		counter = printrot(ptr, counter);
	else if (*format == '+' || *format == ' '
			|| *format == '#' || *format == '0' || *format == '-')
		counter = printflags(format, j, ptr, counter);
	else
		counter = printdefault(format, counter);
	return (counter);
	}
	return (-1);
}
