#include "main.h"
/**
 * printstring - functn to print string
 * @ptr: input pointer
 * @counter: input integer
 *
 * Return: counter
 */
int printstring(va_list ptr, int counter)
{
	int k = 0;
	char *str = va_arg(ptr, char*);

	if (str == NULL)
		str = "(null)";
	while (str[k] != '\0')
	{
		_putchar(str[k++]);
		counter++;
	}
	return (counter);
}

/**
 * printdigit - functn to print integer or decimal
 * @n: input integer
 * @counter: input integer
 *
 * Return: counter
 */
int printdigit(int n, int counter)
{
	int devided = 1;

	if (n < 0)
	{
		{
			_putchar('-');
			counter++;
		}
		while (-1 * ((n / devided)) >= 10)
		{
			devided *= 10;
		}
		while (devided > 0)
		{
			_putchar(-1 * ((n / devided) % 10) + '0');
			counter++;
			devided /= 10;
		}
	}
	else
	{
		while ((n / devided) >= 10)
		{
			devided *= 10;
		}
		while (devided > 0)
		{
			_putchar((n / devided) % 10 + '0');
			counter++;
			devided /= 10;
		}
	}
	return (counter);
}

/**
 * printunsign - functn to print unsigned int
 * @ptr: input pointer
 * @counter: input integer
 *
 * Return: counter
 */
int printunsign(va_list ptr, int counter)
{
	int devided = 1;
	unsigned int n = va_arg(ptr, unsigned int);

	while ((n / devided) >= 10)
	{
		devided *= 10;
	}
	while (devided > 0)
	{
		_putchar((n / devided) % 10 + '0');
		counter++;
		devided /= 10;
	}
	return (counter);
}
