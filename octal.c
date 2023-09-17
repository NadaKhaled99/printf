/**
*octal-used toprint unsigned int in octal 
*@n:unsigned integer to print the integer
*Return:number of characters need to print
*/
int octal(unsigned int n)
{
int dt = 0;
dt = dt + base(n, 8);
if (n / 8)
{
dt = dt + octal(n / 8);
}
putchar('0' + (n % 8));
return dt;
}
