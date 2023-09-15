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
	int k = 0;
	char st;
	char *str;

	if (format == 'c')
	{
		st = va_arg(ptr, int);
		_putchar(st);
		counter++;
	}
	if (format == 's')
	{
		str = va_arg(ptr, char*);
		do {
			_putchar(str[k++]);
			counter++;
		} while (str[k] != '\0');
	}
	if (format == '%')
	{
		_putchar('%');
		counter++;
	}
	return (counter);
}

