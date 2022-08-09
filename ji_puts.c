#include "main.h"

/**
  * ji_put - Function that prints a string
  * @str : A character pointer that accepts the string
  * Return: on success returns printed string.
  */

int ji_put(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}

/**
  * ji_printstr - Function that pulls a string from va_list
  * @ji_args : parameters of the list
  * Return: on success returns ji_put function
  */

int ji_printstr(va_list ji_args)
{
	return (ji_put(va_arg(ji_args, char*)));
}
