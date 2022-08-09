#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
char _putchar(char c);
int ji_printchar(va_list args);
int ji_put(char *str);
int ji_printstr(va_list ji_args);

#endif
