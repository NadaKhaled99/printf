/**
*counter-count the digital no in int
*@n:integer to count digits of
*Return:number of digits
*/
int count_digits(unsigned int n)
{
int co = 0;
if (n == 0)
{
return 1;
}
while (n != 0)
{
n /= 10;
co++;
}
return co;
}
