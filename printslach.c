#include "main.h"
/**
 * printslash - functn to print /, /n, /t
 * @format: input character
 * @ptr: input pointer
 * @counter: input integer
 *
 * Return: counter
 */
int printslash(char format, va_list ptr, int counter)
{
	if (format == '\\')
	{
		_putchar('\\');
		counter++;
	}
	else if (format == 'n')
	{
		_putchar('\n');
		counter++;
	}
	else if (format == 't')
	{
		_putchar('\t');
		counter++;
	}
	else
	{
		_putchar('\\');
		_putchar(format);
		counter = counter + 2;
	}
	return (counter);
}

