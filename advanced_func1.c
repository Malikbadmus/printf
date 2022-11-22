#include "printf.h"
#include <stdio.h>
#include <stdarg.h>
/**
  * print_reverse - reverse string
  * @vl: argument
  * Return: number of chars
  */
int print_reverse(va_list vl)
{
	char *str;
	int i, count = 0;

	str = va_arg(vl, char*);

	if (str == NULL)
	{
		str = ")Null(";
	}
	for (i = 0; str[i]; i++)
		;

	for (i = i - 1; i >= 0; i--)
	{
		char x = str[i];

		_putchar(x);
		count++;
	}
	return (count);
}
