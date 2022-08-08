#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>


int _printf(const char *format, ...);
void _putchar(char c);
int ji_printchar(va_list args);
int ji_put(char *str);
int ji_printstr(va_list ji_args);

#endif
