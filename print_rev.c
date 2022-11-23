#include <stdarg.h>
#include <stdio.h>
#include "printf.h"
/**
  * print_rev - prints in reverse
  * @vl: argument
  * Return: number of chars
  */
int print_rev(va_list vl)
{
	char *str;
	int i, j = 0;

	str = va_arg(vl, char*);
	if (str == NULL)
		str = ")llun(";
	for (i = 0; str[i] != '\0'; i++)
		;
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(str[i]);
		j++;
	}
	return (j);
}
