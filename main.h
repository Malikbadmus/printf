#ifndef MAIN_H_
#define MAIN_H_

int _printf(const char *format, ...);

int print_rot13(va_list l, flags_t *f);
int print_rev(va_list l, flags_t *f);
int print_bigS(va_list l, flags_t *f);

#endif
