#include "main.h"

/**
 * print_char - function that prints a char
 * @c: character
 * Return: 1
 */

int print_char(va_list c)
{
char pc = (char)va_arg(c, int); 
_putchar(pc);
return (1);
}

/**
 * print_str - function that prints a string
 * @s: string
 * Return: length of the string
 */

int print_str(va_list s)
{
char *string = va_arg(s, char *);
int x;
if (string == NULL)
{
string = "(null)";
}
x = 0;
while (string[x])
{
_putchar(string[x]);
x++;
}
return (x);
}
