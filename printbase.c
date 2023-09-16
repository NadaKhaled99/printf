#include "main.h"
/**
 * printbase - functn to print bin, oct, hex
 * @format: input character
 * @ptr: input pointer
 * @counter: input integer
 *
 * Return: counter
 */
int printbase(char format, va_list ptr, int counter)
{
	if (format == 'b')
		counter = printbze(ptr, 2, counter);
	else if (format == 'o')
		counter = printbze(ptr, 8, counter);
	else if (format == 'x')
		counter = printhex(ptr, 16, counter, 0);
	else if (format == 'X')
		counter = printhex(ptr, 16, counter, 1);
	return (counter);
}

/**
 * printbze - functn to print bin, oct
 * @ptr: input pointer
 * @base: input integer
 * @counter: input integer
 *
 * Return: counter
 */
int printbze(va_list ptr, int base, int counter)
{
	unsigned int n = va_arg(ptr, unsigned int);
	int bit[32];
	int k = 0;

	if (n == 0)
	{
		_putchar('0');
		counter++;
	}
	while (n > 0)
	{
		bit[k] = n % base;
		n /= base;
		k++;
	}
	k--;
	while (k >= 0)
	{
		_putchar(bit[k] + '0');
		k--;
		counter++;
	}
	return (counter);
}

/**
 * printhex - functn to print hexadecimal
 * @ptr: input pointer
 * @base: input integer
 * @counter: input integer
 * @hexcase: input integer (upper or lower)
 *
 * Return: counter
 */
int printhex(va_list ptr, int base, int counter, int hexcase)
{
	unsigned int n = va_arg(ptr, unsigned int);
	int bit[32];
	int k = 0;

	if (n == 0)
	{
		_putchar('0');
		counter++;
	}
	while (n > 0)
	{
		bit[k] = n % base;
		n /= base;
		k++;
	}
	k--;
	while (k >= 0)
	{
		if ((bit[k] > 9) && (hexcase == 0))
			_putchar(bit[k] - 10 + 'a');
		if ((bit[k] > 9) && (hexcase == 1))
			_putchar(bit[k] - 10 + 'A');
		else if (bit[k] <= 9)
			_putchar(bit[k] + '0');
		k--;
		counter++;
	}
	return (counter);
}

