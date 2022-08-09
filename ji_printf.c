#include "main.h"
/**
 * _printf - prints out line of char
 * @format: set of format specifiers
 * Return: NULL
 */

int _printf(const char *format, ...)
{
	int i, ji_num = 0;
	va_list ji_args;

	va_start(ji_args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
			switch (format[i + 1])
			{
				case 'c':
					ji_num += ji_printchar(ji_args);
					i += 2;
					break;
				case '%':
					ji_num++;
					_putchar('%');
					i += 2;
					break;
				case 's':
					ji_num += ji_printstr(ji_args);
					i += 2;
					break;
			}
		ji_num++;
		_putchar(format[i]);
	}
	va_end(ji_args);
	return (ji_num);
}
