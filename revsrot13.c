#include "main.h"
/**
 * _strlen - functn measure array length
 * @s: my input
 *
 * Description: function calculate arr length
 *
 * Return: length
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

/**
 * printreversed - functn reversed string
 * @ptr: input pointer
 * @counter: input integer
 *
 * Return: counter
 */
int printreversed(va_list ptr, int counter)
{
	char *str = va_arg(ptr, char *);
	int len = _strlen(str);
	char tmp[BUFFER_SIZE];
	int k;

	for (k = 0; k < len; k++)
	{
		tmp[k] = str[len - k - 1];
	}
	tmp[k] = '\0';
	k = 0;
	do {
		_putchar(tmp[k++]);
		counter++;
	} while (tmp[k] != '\0');
	return (counter);
}

/**
 * printrot - print encoded string using rot13.
 * @ptr: input pointer
 * @counter: input integer
 *
 * Return: counter
 */
int printrot(va_list ptr, int counter)
{
	char *str = va_arg(ptr, char *);
	int len = _strlen(str);
	int i;

	for (i = 0; i < len; i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
			_putchar(str[i] + 13);
		else if ((str[i] >= 'n' && str[i] <= 'z') ||
				(str[i] >= 'N' && str[i] <= 'Z'))
			_putchar(str[i] - 13);
		else
			_putchar(str[i]);
		counter++;
	}
	return (counter);
}

