#include "main.h"
/**
 * printslash - functn to print /, /n, /t
 * @format: input character
 * @counter: input integer
 *
 * Return: counter
 */
int printslash(const char *format, int counter)
{
	if (*format)
	{
	if (*format == '\\')
	{
		_putchar('\\');
		counter++;
	}
	else if (*format == 'n')
	{
		_putchar('\n');
		counter++;
	}
	else if (*format == 't')
	{
		_putchar('\t');
		counter++;
	}
	else
	{
		_putchar('\\');
		_putchar(*format);
		counter = counter + 2;
	}
	return (counter);
	}
	return (-1);
}

