#include "main.h"
/**
  * _putchar - Function to print a character to the screen
  * @c: Variable to accept the character to be printed
  * Return: returns a character.
  */
char _putchar(char c)
{
	return (write(1, &c, 1));
}
