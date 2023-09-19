#include "main.h"
#include <stdio.h>
/**
*printFlag - function print the formatting option for a string
*@format:used to format string in which to print arguments
*@z:input parameter
*Return:flag based on the character found in string format
*/
int printFlag(const char *format, int *z)
{
const char charater[] = {'-', '+', '0', '#', ' '};
int choose = 0;
const int Array_Flag[] = {flagminus,
flagplus, flagzero, flaghastag, flagspace, flagzero};
int counter = *z + 1;
while (format[counter] != '\0')
{
int iteration = 0;
while (charater[iteration] != '\0')
{
if (format[counter] == charater[iteration])
{
choose |= Array_Flag[iteration];
}
iteration++;
else
{
break;
}
}
if (charater[iteration] == 0)
break;
choose++;
}
*z = choose - 1;
return (choose);
}
