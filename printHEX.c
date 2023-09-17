/**
*printhex-functn to print Hex string
*@ptr: input pointer
*@base:paramter used to convert the integer into string
*@hexcase:check the value of the paramter
*@counter: input integer
*Return: counter
*/
int printhex(va_list ptr, int base, int counter, int hexcase)
{
int j = 0;
int number = va_arg(ptr, int);
int tmp[100];
while (number != 0)
{
int rm = number % base;
tmp[j++] = (rm < 10) ? rm + '0' : (hexcase ? rm + 'A' - 10 : rm  + 'a' - 10);
number = number / base;
}
if (j == 0)
{
tmp[j++] = '0';
}
while (j > 0)
{
_putchar(tmp[--j];
counter++;
}
return (counter);
}
