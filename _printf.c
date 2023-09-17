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

	while (format)
	{
		va_start(ptr, format);
		while (*(format + j) != '\0')
		{
			if (*(format + j) == '%')
			{
				j++;
				counter = printcs(*(format + j), ptr, counter);
				j++;
			}
			else
			{
				_putchar(*(format + j));
				counter++;
				j++;
			}
		}
		va_end(ptr);
		break;
	}
	_putchar('\n');
	return (counter);
}
