# THIS FILE WILL DESCRIBE THE PRINTF FUNCTION
HERE IS THE DESCISRIPTION
#  Used libraries:
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include <limits.h>
#include <stdio.h>
——————————————————————————————
——————————————————————————————
/**
# int _printf(const char *format, ...)
* _printf - Prints anything
*@format: String with format of parameters.
 * Return: counter number.
*/
——————————————————————————————
# int printcs(char format, va_list ptr, int counter)
/**
 * printcs - functn to print c, s, %
 * @format: input character
 * @ptr: input pointer
 * @counter: input integer
 * Return: counter
 */
——————————————————————————————
/**
# int _putchar(char c)
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
*/
——————————————————————————————
/**
# int printpointer(va_list ptr, int counter)
*printpointer- functn to print pointer
*@ptr:input pointer
*@counter: input integer
*Return: counter
*/
——————————————————————————————
# int printString(va_list ptr, int counter)
/**
*printString-function to print String with non printable
*@ptr:input pointer
*@counter:input integer
*Return:counter
*/
——————————————————————————————
# int printbase(char format, va_list ptr, int counter)
/**
 * printbase - functn to print bin, oct, hex
 * @format: input character
 * @ptr: input pointer
 * @counter: input integer
 * Return: counter
*/
——————————————————————————————
# int printchar(va_list ptr, int counter)
/**
 * printchar - functn to print char
 * @ptr: input pointer
 * @counter: input integer
 * Return: counter
*/
——————————————————————————————
# int printslash(char format, int counter)
/**
 * printslash - functn to print /, /n, /t
 * @format: input character
 * @counter: input integer
 * Return: counter
*/
——————————————————————————————
# int printhex(va_list ptr, int base, int counter, int hexcase)
/**
 * printhex - functn to print hexadecimal
 * @ptr: input pointer
 * @base: input integer
 * @counter: input integer
 * @hexcase: input integer (upper or lower)
 *
 * Return: counter
 */
——————————————————————————————
# int printpercentage(int counter)
/**
 * printpercentage - functn to print %
 * @counter: input integer
 * Return: counter
 */
——————————————————————————————
# int printdefault(char format, int counter)
/**
 * printdefault - functn to print default
 * @format: input character
 * @counter: input integer
 * Return: counter
 */
—————————————————————————————-
# int printstring(va_list ptr, int counter)
/**
 * printstring - functn to print string
 * @ptr: input pointer
 * @counter: input integer
 * Return: counter
 */
——————————————————————————————
# int printdigit(va_list ptr, int counter)
/**
 * printdigit - functn to print integer or decimal
 * @ptr: input pointer
 * @counter: input integer
 * Return: counter
 */
——————————————————————————————
# int printunsign(va_list ptr, int counter)
/**
 * printunsign - functn to print unsigned int
 * @ptr: input pointer
 * @counter: input integer
 * Return: counter
 */
——————————————————————————————
# int _strlen(char *s)
/**
 * _strlen - functn measure array length
 * @s: my input
 * Description: function calculate arr length
 * Return: length
 */
——————————————————————————————
# int printreversed(va_list ptr, int counter)
/**
 * printreversed - functn reversed string
 * @ptr: input pointer
 * @counter: input integer
 * Return: counter
 */
——————————————————————————————
# int printrot(va_list ptr, int counter)
/**
 * printrot - print encoded string using rot13.
 * @ptr: input pointer
 * @counter: input integer
 * Return: counter
 */
——————————————————————————————
