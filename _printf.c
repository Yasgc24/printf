#include "main.h"
/**
 * c_specifiers - check conversion specifiers
 * @format1: format specifier
 * Return: Pointer or NULL
 */

int (*c_specifiers(const char *format1))(va_list)
{
print_t cs[] = {
{"c", print_char},
{"s", print_str},
{"d", print_dec},
{"i", print_int},
{NULL, NULL}
};
int i;
i = 0;
while (cs[i].print != NULL && *(cs[i].print) != *format1)
i++;
return (cs[i].f);
}

/**
 * _printf - produces output according to a format
 * @format: format
 * Return:  number of characters printed
 */

int _printf(const char *format, ...)
{
va_list list;
int a = 0, count = 0;
int (*f)(va_list);

if (format == NULL)
return (-1);

va_start(list, format);

while (format[a] != '\0')
{
if (format[a] == '%' && format[a + 1] == '\0')
{
_putchar('%');
count++;
return (count);
}
else if (format[a] == '%' && format[a + 1] == '%')
{
_putchar('%');
a += 2;
count++;
}
else if (format[a] == '%')
{
f = c_specifiers(&format[a + 1]);
if (f != NULL)
a += 2;
count += f(list);
}
else
_putchar(format[a]);
a++;
count++;
}
va_end(list);
return (count);
}
