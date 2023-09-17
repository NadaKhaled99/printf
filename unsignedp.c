/**
*unsignedp-used to print unsigned int
*@n:unsigned int to print a number
*Return: No of characters need to print
*/
int unsignedp(unsigned int n)
{
int dt = 0;
dt = dt + counter(n);
if (n / 10)
{
dt = dt + unsignedp(n / 10);
}
putchar('0' + (n % 10));
return dt;
}
