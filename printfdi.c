#include "main.h"

/**
* print_dec - converts argument to signed decimal notation
* @d: decimal
* Return: value
*/

int print_dec(va_list d)
{
int integer = va_arg(d, int);
int x = 1;
int len = 0;
unsigned int n;

if (integer < 0)
{
len += _putchar('-');
n = integer * -1;
}
else
n = integer;

while (n / x > 9)
x *= 10;

while (x != 0)
{
len += _putchar('0' + n / x);
n %= x;
x /= 10;
}
return (len);
}


/**
* print_int - converts argument to signed decimal notation
* @i: integer
* Return: value
*/

int print_int(va_list i)
{
int integer = va_arg(i, int);
int x = 1;
int len = 0;
unsigned int n;

if (integer < 0)
{
len += _putchar('-');
n = integer * -1;
}
else
n = integer;

while (n / x > 9)
x *= 10;

while (x != 0)
{
len += _putchar('0' + n / x);
n %= x;
x /= 10;
}
return (len);
}
