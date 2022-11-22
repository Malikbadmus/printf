#include "printf.h"
/**
  * print_func - prints the specifier
  * @b: var to function
  * Return: function
  */
int (*print_func(char b))(va_list)
{
	int i = 0;
	spec arr[] = {
		{"c", print_c},
		{"s", print_s},
		{"%", print_percent},
		{"d", print_d},
		{"i", print_i},
		{NULL, NULL}
	};
	while (arr[i].correct)
	{
		if (b == arr[i].correct[0])
			return (arr[i].f);
		i++;
	}
	return (NULL);
}
