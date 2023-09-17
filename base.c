/**
*base-count the number with specific base
*@n:used to count digits
*@pase:system base
*Return:number of digits
*/
int base(unsigned int n, int pase)
{
int ct = 0;
if (n == 0)
{
return 1;
}
while (n != 0)
{
n /= pase;
ct++;
}
return ct;
}
