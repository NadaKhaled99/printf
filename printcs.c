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
	char str;

	if (format == 'c')
	{
		str = va_arg(ptr, int);
		_putchar(str);
		counter++;
	}
	else if (format == 's')
		counter = printstring(ptr, counter);
	else if (format == '%')
	{
		_putchar('%');
		counter++;
	}
	else if ((format == 'd') || (format == 'i'))
		counter = printdigit(ptr, counter);
	else if ((format == 'b') || (format == 'o')
			|| (format == 'x') || (format == 'X'))
		counter = printbase(format, ptr, counter);
	else if (format == 'u')
		counter = printunsign(ptr, counter);
else if (format == 'S')
counter = printstringASCII(ptr, counter);
	return (counter);
}
