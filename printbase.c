#include "main.h"
/**
 * printbase - functn to print bin, oct, hex
 * @format: input character
 * @n: input integer
 * @counter: input integer
 *
 * Return: counter
 */
int printbase(const char *format, unsigned int n, int counter)
{
if (*format == 'b')
counter = printbze(n, 2, counter);
else if (*format == 'o')
counter = printbze(n, 8, counter);
else if (*format == 'x')
counter = printhex(n, 16, counter, 0);
else if (*format == 'X')
counter = printhex(n, 16, counter, 1);
return (counter);
}
/**
 * printbze - functn to print bin, oct
 * @n: input integer
 * @base: input integer
 * @counter: input integer
 *
 * Return: counter
 */
int printbze(unsigned int n, int base, int counter)
{
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
 * @n: input integer
 * @base: input integer
 * @counter: input integer
 * @hexcase: input integer (upper or lower)
 *
 * Return: counter
 */
int printhex(unsigned int n, int base, int counter, int hexcase)
{
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
