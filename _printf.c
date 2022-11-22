#include "main.h"

/**
 * _printf - prints characters to the output screen according to the format
 * specifier
 * @format: an argument of all the desired characters
 * Return: a total count of characters printed
 */

int _printf(const char *format, ...)
{
int print_count;
conv_f func[] = {
{"c", printf_char},
{"s", printf_string},
{"%", printf_percent},
{"i", printf_integer},
{"d", printf_decimal},
{"b", printf_binary},
{"u", printf_unsigned},
{"o", printf_octal},
{"x", printf_hex_lower},
{"X", printf_hex_upper},
{NULL, NULL},
};

va_list list;

if (format == NULL)
return (-1);

va_start(list, format);

print_count = selector(format, func, list);
va_end(list);
return (print_count);
}
