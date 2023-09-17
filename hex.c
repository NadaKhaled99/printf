/**
*hexadecimal-print unsigned int in hexadecimal 
*@n:unsigned integer need to be printed
*@up:indicator used to print uppercase letters
*Return: Number of characters printed
*/
int hexadecimal(unsigned int n, int up)
{
int d = 0;
char hdt[] = "0123456789abcdef";
char hdtup[] = "0123456789ABCDEF";
char *arr = up ? hdtup : hdt;
d = d + base(n, 16);
if (n / 16)
{
d = d + hexadecimal(n / 16, up);
}
putchar(arr[n % 16]);
return d;
}
