#include "main.h"
/**
 * c_specifiers - check conversion specifiers
 * @format: format specifier
 * Return: Pointer or NULL
 */

int (*c_specifiers(const char *format))(va_list)
{
print_t ch[] = {
{"c", print_char},
{"s", print_str},
{"d", print_dec},
{"i", print_int},
{NULL, NULL}
};
int i;
i = 0;
while (ch[i].print != NULL && *(ch[i].print) != *ptr)
i++;
return (ch[i].f);
}
