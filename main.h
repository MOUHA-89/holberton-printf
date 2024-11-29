#ifndef MAIN_H
#define MAIN_H  

#include <stdarg.h>
#include <stdio.h>

int _putchar(char c);
int _printf(const char *format, ...);
int format_char(va_list arg_list);
int format_string(va_list arg_list);
int format_percent(va_list arg_list);
int format_int(va_list arg_list);

#endif
