#ifndef PRINT_H
#define PRINT_H
#include <stdio.h>
#include <stdarg.h>
/**
  * struct specify_print - specifies struct
  * @correct: correct character
  * @f: function
  */

typedef struct specify_print
{
	char *correct;
	int (*f)(va_list);
} spec;

int _printf(const char *format, ...);
int _putchar(char c);
int (*print_func(char b))(va_list vl);
int print_c(va_list vl);
int print_s(va_list s);
int print_percent(va_list vl);
int print_d(va_list vl);
int print_i(va_list vl);
int print_rev(va_list vl);
int print_bin(va_list vl);
int print_x(va_list vl);
int print_rot13(va_list R);
int print_X(va_list vl);
int print_unsig(va_list vl);
int print_octal(va_list vl);
int print_dec(va_list vl);



#endif
