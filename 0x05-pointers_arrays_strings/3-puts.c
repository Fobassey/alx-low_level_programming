#include "main.h"

/* betty style doc for function main goes there */
/**
 * _puts- prints a string
 * @str: is a pointer
 * Return: returns the value zero
 */

void _puts(char *str)

{

	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
