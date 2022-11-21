#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * _printf - print output
 * @format: format string containing the characters and the specifiers
 *@...: varidic parameters(unknown)
 * Return: length of the formatted output string
 */

int _printf(const char *format, ...)
{
  int i = 0;

  while (format[i])
  {
    write(1,&format[i],1);
    i++;
    
  }

  return(0);
}
