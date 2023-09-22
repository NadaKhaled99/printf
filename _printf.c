#include "main.h"
/**
* _printf - Prints anything.
* @format: String with format of parameters.
*
* Return: counter number.
*/
int _printf(const char *format, ...)
{
	va_list ptr;
	int j = 0;
	int counter = 0;

	if (format == NULL || (format[0] == '%' && format[1] == '\0')
			|| (format[0] == '%' && format[1] == ' ' && !format[2]))
		return (-1);
	va_start(ptr, format);
	while (*(format + j) != '\0')
	{
		if (*(format + j) == '\\')
		{
			j++;
			counter = printslash(format + j, counter);
		}
		else if (*(format + j) == '%')
		{
			j++;
			if (!*(format + j))
				return (-1);
			counter = printcs(format + j, &j, ptr, counter);
		}
		else
		{
			_putchar(*(format + j));
			counter++;
		}
		j++;
	}
	va_end(ptr);
	return (counter);
}
