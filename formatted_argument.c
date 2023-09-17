/**
*formatted_argument-print the formatted argument
*@format:format string
*@len: lenght format string
*@ptr:list of variable argument
*Return:no.of characters thst printed
*/
int formatted_argument(const char *format, int len, va_list ptr)
{
char *string;
int ch = 0;
switch (format[len])
{
case 'c':
putchar(va_arg(ptr, int));
ch++;
break;
case 's':
string = va_arg(ptr, char *);
if (string == NULL)
{
string = "(null)";
}    
while (*string)
{
putchar(*string);
string++;
ch++;
}
break;
case 'd':
case 'i':
ch = ch + number(va_arg(ptr, int));
break;
case 'u':
ch = ch + unsignedp(va_arg(ptr, unsigned int));
break;
case 'o':
ch = ch + octal(va_arg(ptr, unsigned int));
break;
case 'x':
ch = ch + hexadecimal(va_arg(ptr, unsigned int), 0);
break;
case 'X':
ch = ch + hexadecimal(va_arg(ptr, unsigned int), 1);
break;
case 'p':
putchar('0');
putchar('x');
ch = ch + 2;
ch = ch + hexadecimal((unsigned int)(uintptr_t)va_arg(ptr, void *), 0);
break;
default:
putchar('%');
putchar(format[len]);
ch = ch + 2;
break;
}
return ch;
}
