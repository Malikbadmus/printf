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
  int count = 0;
  int value = 0;

  /*Prevent a Null pointer*/
  if (format == NULL)
        return (-1);

  while (format[i])
  {

      if (format[i] != '%')
      {
          count = write(1,&format[i],1);
          count = count + value;
          i++;
          continue;
      }

      if (format[i] == '%')
      {

            printf("i have encountered a %\n");
      }

  }

  return(0);
}
