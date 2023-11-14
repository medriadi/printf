#include "main.h"
/**
* print_from_to - Prints a range of characters from start
* to stop excluding except.
* @start: Starting address of the range.
* @stop: Stopping address of the range.
* @except: Address to be excluded from printing.
*
* Return: The number of bytes printed.
*/
int print_from_to(char *start, char *stop, char *except)
{
int sum = 0;
while (start <= stop)
{
if (start != except)
sum += _putchar(*start);
start++;
}
return (sum);
}
/**
* print_rev - Prints a string in reverse.
* @ap: The string to print.
* @params: The parameters struct.
*
* Return: The number of bytes printed.
*/
int print_rev(va_list ap, params_t *params)
{
int len, sum = 0;
char *str = va_arg(ap, char *);
(void)params;
if (str)
{
for (len = 0; str[len]; len++)
;
for (; len > 0; len--)
sum += _putchar(str[len - 1]);
}
return (sum);
}
/**
* print_rot13 - Prints a string in ROT13 encoding.
* @ap: The string to print.
* @params: The parameters struct.
*
* Return: The number of bytes printed.
*/
int print_rot13(va_list ap, params_t *params)
{
int i, index, count = 0;
char arr[] =
"NOPQRSTUVWXYZABCDEFGHIJKLM nopqrstuvwxyzabcdefghijklm";
char *a = va_arg(ap, char *);
(void)params;
for (i = 0; a[i]; i++)
{
if ((a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= 'a' && a[i] <= 'z'))
{
index = a[i] - 65;
count += _putchar(arr[index]);
}
else
{
count += _putchar(a[i]);
}
}
return (count);
}
