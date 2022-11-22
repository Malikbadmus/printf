#include "printf.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * _printf - print output
 * @format: format string containing the characters and the specifiers
 * Return: length of the formatted output string
 */
int _printf(const char *format, ...)
{
	if (format != NULL)
	{
		int count = 0;
		int i = 0;
		int (*x)(va_list);
		va_list vl;

		va_start(vl, format);
		if (format[0] == '%' && format[1] == '\0')
			return (-1);
		while (format != NULL && format[i] != '\0')
		{
			if (format[i] == '%')
			{
				if (format[i + 1] == '%')
				{
					count = count + _putchar(format[i]);
					i += 2;
				}
				else
				{
					x = print_func(format[i + 1]);
					if (x)
						count += x(vl);
					else
						count = _putchar(format[i]) + _putchar(format[i + 1]);
					i += 2;
				}
			}
				else
				{
					count += _putchar(format[i]);
					i++;
				}
			}
			va_end(vl);
			return (count);
	}
		return (-1);
}
