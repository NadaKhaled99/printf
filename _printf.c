#include "main.h"
/**
* _printf - Prints anything.
* @format: String with format of parameters.
*
* Return: counter number.
*/
#define BUFFER_SIZE 1024
char bufer[BUFFER_SIZE];
int buf = 0;
int _printf(const char *format, ...)
{
	va_list ptr;
	int j = 0;
	int counter = 0;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(ptr, format);
	while (*(format + j) != '\0')
	{
	if (buf == BUFFER_SIZE - 1)
	{
	write(1, bufer, buf);
	buf = 0;
		}
		if (*(format + j) == '\\')
		{
			j++;
			counter = printslash(*(format + j), counter);
		}
		else if (*(format + j) == '%')
		{
			j++;
			if (!*(format + j))
				return (-1);
			counter = printcs(*(format + j), ptr, counter);
		}
		else
		{
			_putchar(*(format + j));
			counter++;
			 bufer[buf++] = *j;
		}
		if (buf > 0)
		{
		write(1, bufer, buf);
		}
		j++;
	}
	va_end(ptr);
	_putchar('\n');
	return (counter);
}
