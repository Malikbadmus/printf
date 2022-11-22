#include "printf.h"
#include <stdio.h>
#include <stdarg.h>
/**
  * print_c - prints character c
  * @vl: argument
  * Return: the number of charac
  */
int print_c(va_list vl)
{
	int c;

	c = va_arg(vl, int);
	return (_putchar(c));
}
/**
  * print_s - prints string
  * @vl: argument
  * Return: number of characters
  */
int print_s(va_list vl)
{
	int i, count = 0;
	char *str;

	i = 0;
	str = va_arg(vl, char*);
	if (str == NULL)
		str = "(null)";
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
		count++;
	}
	return (count);
}
/**
  * print_percent - prints percent to str
  * @vl: argument
  * Return: percent
  */
int print_percent(va_list vl)
{
	char *str;

	str = "%";
	if (va_arg(vl, int) == *str)
	{
		return (*str);
	}
	return (*str);
}
/**
  * print_d - to print a decimal
  * @vl: argument
  * Return: count
  */
int print_d(va_list vl)
{
	unsigned int total, all, num, count;
	int n;

	count = 0;
	n = va_arg(vl, int);
	if (n < 0)
	{
		total = (n * -1);
		count += _putchar('-');
	}
	else
		total = n;

	all = total;
	num = 1;
	while (all > 9)
	{
		all /= 10;
		num *= 10;
	}
	while (num >= 1)
	{
		count += _putchar(((total / num) % 10) + '0');
		num /= 10;
	}
	return (count);
}
/**
  * print_i - prints an integer
  * @vl: argument
  * Return: decimal function
  */
int print_i(va_list vl)
{
	return (print_d(vl));
}
