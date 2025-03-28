#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...);
int handle_percent(void);
int handle_char_str(char specifier, va_list args);
int print_int(va_list args);

#endif
