#include "main.h"
/**
  * ji_printchar - Function that prints a character
  * @args : Argument of va_list type
  *
  * Return: Always 1
  */

int ji_printchar(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}
